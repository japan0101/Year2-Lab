#include<stdio.h>
int main(){
    int thisAge, thisHght, thisWght, totalAge, avgAge,
    count1, count2, count3, count4;
    float  totalHght, totalWght, avgHeight, avgWeight;
    totalAge = 0;
    totalHght = 0;
    totalWght = 0;
    avgHeight = 0.0;
    avgWeight = 0.0;
    count1 = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    for(int i = 0; i < 50; i++){
        scanf("%d %d %d", &thisAge, &thisHght, &thisWght);
        totalAge += thisAge;
        totalHght += thisHght;
        totalWght += thisWght;
        if(thisAge >= 20 && thisHght >= 160){
            count1 += 1;
        }
        if(thisAge < 20 && (thisHght <= 180 || thisWght >= 60)){
            count2 += 1;
        }
        if(thisAge >= 30 && thisWght >= 40 && thisWght <= 80){
            count3 += 1;
        }
        if(thisAge < 40 && (thisHght <= 200 || thisWght < 85)){
            count4 += 1;
        }
    }
    avgAge = totalAge / 50;
    avgHeight = totalHght / 50;
    avgWeight = totalWght / 50;
    printf("Age >= 20 and Height >= 160: %d\nAge < 20 and Height <= 180 or Weight >= 60: %d\nAge >= 30 and Weight >= 40 and Weight <= 80: %d\nAge < 40 and Weight < 85 or Height <= 200: %d\n\
Average Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f", count1, count2, count3, count4, avgAge, avgHeight, avgWeight);
}