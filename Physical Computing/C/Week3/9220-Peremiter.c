#include<stdio.h>
int main(){
    double width, length, perimeter;
    scanf("%lf\n%lf", &width, &length);
    perimeter = 2 * width + 2 * length;
    printf("Perimeter of rectangle = %.04lf units", perimeter);
    return 0;
}