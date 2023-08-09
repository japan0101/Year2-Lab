#include<stdio.h>
int main(){
    double base_price, sales, amount, sales_price, net_price;
    scanf("%lf\n%lf\n%lf", &base_price, &sales, &amount);
    sales = sales / 100;
    sales_price = (1 - sales) * base_price;
    net_price = sales_price * amount;
    printf("%.02lf", net_price);
    return 0;
}