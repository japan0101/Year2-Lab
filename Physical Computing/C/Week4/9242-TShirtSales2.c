#include<stdio.h>
int main(){
    double base_price, percent, b2g1, discount;
    int shirts;
    scanf("%lf\n%lf\n%d", &base_price, &percent, &shirts);
    b2g1 = ((shirts / 3) * 2 * base_price) + (shirts % 3) * base_price;
    discount = (shirts * base_price) * ((100 - percent) / 100);
    if(b2g1 > discount){
        printf("Discount %.0lf%%\n%.2lf", percent, discount);
    }else{
        printf("Buy 2 Get 1\n%.2lf", b2g1);
    }
}