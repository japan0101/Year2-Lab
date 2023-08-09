#include<stdio.h>
// #include<math.h>
int main(){
    double num1, num2, sum, diff, prod, quo;
    scanf("%lf,%lf", &num1, &num2);
    sum = num1 + num2;
    diff = /*abs*/(num1 - num2);
    prod = num1 * num2;
    quo = num1 / num2;
    printf("The sum of the given numbers : %lf\nThe difference of the given numbers : %lf\n\
The product of the given numbers : %lf\nThe quotient of the given numbers : %lf"\
, sum, diff, prod, quo);
    return 0;
}