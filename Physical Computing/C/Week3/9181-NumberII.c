#include<stdio.h>
int main(){
    char str1[5];
    scanf("%s", str1);
    printf("%1.1s%79.0s", str1,str1);
    printf("%3.2s%77.0s", str1,str1);
    printf("%5.3s%75.0s", str1,str1);
    printf("%7.4s%73.0s", str1,str1);
    printf("%9.5s", str1);
    return 0;
}