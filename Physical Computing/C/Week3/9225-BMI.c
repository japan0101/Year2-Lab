#include<stdio.h>
int main(){
    float height, weight, bmi;
    scanf("%f\n%f", &height, &weight);
    bmi = weight / ((height / 100) * (height / 100));
    printf("%f", bmi);
    return 0;
}