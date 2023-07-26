#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
    int num1, num2, num3;
    scanf("%d\n%d", &num1, &num2);
    if (num1 == num2){
        num3 = num1 * 2;
        printf("%d + %d = %d", num1, num2, num3);
    }else{
        num3 = num1 - num2;
        printf("%d - %d = %d", num1, num2, num3);
        // if(num1 > num2){
        // }else{
        //     printf("%d - %d = %d", num2, num1, abs(num3));
        // }
    }
}