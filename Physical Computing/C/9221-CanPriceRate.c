#include<stdio.h>
int main(){
    double price, diameter, radius, height, volume, baht_p_ml;
    scanf("%lf\n%lf\n%lf", &price, &diameter, &height);
    radius = diameter / 2;
    volume = height * 3.14159265359 * (radius * radius);
    baht_p_ml = price / volume;
    printf("Volume : %.02lfml\nBaht/ml : %.04lf", volume, baht_p_ml);
    return 0;
}