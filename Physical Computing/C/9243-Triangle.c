#include<stdio.h>
int main(){
    float side1, side2, side3;
    scanf("%f\n%f\n%f", &side1, &side2, &side3);
    if(side1 + side2 > side3 & side3 + side2 > side1 & side1 + side3 > side2){
        printf("Triangle is valid.");
    }else{
        printf("Triangle is not valid.");
    }
}