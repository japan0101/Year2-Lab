#include<stdio.h>
int main(){
    float num_1, num_2, num_3, num_4, sum, avg;
    scanf("%f", &num_1);
    scanf(" %f", &num_2);
    scanf(" %f", &num_3);
    scanf(" %f", &num_4);
    sum = num_1 + num_2 + num_3 + num_4;
    avg = (sum) / 4;
    printf("Summation is %.2f\nAverage is %.3f", sum, avg);
    return 0;
}