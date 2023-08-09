#include<stdio.h>
int main(){
    char sen1[100], sen2[100], sen3[100], sen4[100];
    scanf("%s\n%s\n%s\n%s", sen1, sen2, sen3, sen4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", sen1, sen2, sen3, sen4);
    return 0;
}