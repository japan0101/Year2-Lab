#include<stdio.h>
#include<math.h>

int main(){
    int degree, speed;
    double radian, PI = 3.141592653589793, height, gravity = 9.81;
    scanf("%d\n%d", &degree, &speed);
    radian = (degree * PI)/180;
    height = (pow(speed, 2) * pow(sin(radian), 2) / (2 * gravity));
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", degree, speed, height);
}