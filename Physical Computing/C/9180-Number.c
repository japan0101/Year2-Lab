#include<stdio.h>
int main(){
    char num1[2], num2[5];
    scanf("%2s%5s", num1, num2);
    printf("%s%s", num2, num1);
    return 0;
}