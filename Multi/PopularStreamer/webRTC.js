import { initializeApp } from "https://www.gstatic.com/firebasejs/10.4.0/firebase-app.js";
import { getFirestore, collection, addDoc, onSnapshot } from "https://www.gstatic.com/firebasejs/10.4.0/firebase-firestore.js";
import { offer } from "./offer.js";
import { answer } from "./answer.js";

const app = initializeApp(firebaseConfig);
const fireStore = getFirestore(app);
export const collection_calls = collection(fireStore, 'calls');

// importing dom elements
const vdo_local = document.querySelector('#vdo_local');
const vdo_remote = document.querySelector('#vdo_remote');

const btn_webCam = document.querySelector('#btn_webCam');
const btn_offer = document.querySelector('#btn_offer');
const btn_answer = document.querySelector('#btn_answer');

//server config
const server = {
    iceServers: [
        {
        //free stun server
            urls: [
                'stun:stun1.l.google.com:19302',
                'stun:stun2.l.google.com:19302'
            ]
        }
    ],
    iceCandidatePoolSize: 10,
}

export const pc = new RTCPeerConnection(server);

let localStream = null;
let remoteStream = null;

btn_webCam.onclick = setStream;
btn_offer.onclick = offer;
btn_answer.onclick = answer;

async function setStream(){
    localStream = await navigator.mediaDevices.getUserMedia({
        video: true,
        audio: false
    })

    remoteStream = new MediaStream();

    localStream.getTracks().forEach(track => {
        pc.addTrack(track, localStream);
    })

    pc.ontrack = event => {
        event.streams[0].getTracks().forEach(track => {
            remoteStream.addTrack(track)
        })
    }

    vdo_local.srcObject = localStream;
    vdo_remote.srcObject = remoteStream;

    btn_offer.disabled = false;
    btn_answer.disabled = false;
    btn_webCam.disabled = true;
}

export async function createSDP(description){
    await pc.setLocalDescription(description);

    //config for offer
    const sdp = {
        sdp: description.sdp,
        type: description.type
    }

    return sdp;
}

export async function listenLocalCandidate(collection){
    pc.onicecandidate = event => {
        event.candidate && addDoc(collection, event.candidate.toJSON())
    }
}

export async function listenRemoteCandidate(collection){
    onSnapshot(collection, snapshot => {
        snapshot.docChanges().forEach(change => {
            if (change.type === 'added') {
                const data = change.doc.data();
                const candidate = new RTCIceCandidate(data);
                pc.addIceCandidate(candidate);
            }
        })
    })    
}