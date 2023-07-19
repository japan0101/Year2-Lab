#include<stdio.h>
#include<math.h>
int main(){
    double base, height, side;
    scanf("%lf", &base);
    scanf(" %lf", &height);
    side = sqrt(pow(base, 2) + pow(height, 2));
    printf("%.2lf", side);
    return 0;
}