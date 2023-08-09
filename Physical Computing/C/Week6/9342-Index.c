#include<stdio.h>
int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int want = 0;
    while(want < 1 || want > 20){
        scanf("%d", &want);
    }
    for(int i = 0; i < 8; i++){
        if(M[i] == want){
            printf("%d is in M at index [%d]", want, i);
            return 0;
        }
    }
    for(int i = 0; i < 7; i++){
        if(N[i] == want){
            printf("%d is in N at index [%d]", want, i);
            return 0;
        }
    }
    printf("%d is not in neither M nor N", want);
    return 0;
}