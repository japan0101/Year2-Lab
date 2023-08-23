#include<stdio.h>
#include<math.h>

double perimeter(double sideA, double sideB, double sideC);
double area(double width, double height);
double findC(double sideA, double sideB);

double main(){
    double sideA, sideB, sideC;
    scanf("%lf\n%lf", &sideA, &sideB);
    sideC = findC(sideA, sideB);
    printf("Perimeter: %.2lf\nArea: %.2lf", perimeter(sideA, sideB, sideC), area(sideA, sideB));
    return 0;
}

double findC(double sideA, double sideB){
    return sqrt((sideA * sideA) + (sideB * sideB));
}

double area(double width, double height){
    return (0.5 * width * height);
}

double perimeter(double sideA, double sideB, double sideC){
    return sideA + sideB + sideC;
}