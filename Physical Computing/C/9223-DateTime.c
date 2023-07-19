#include<stdio.h>
#include<math.h>
int main(){
    int day, hrs, min, sec, raw_put;
    double bufferu, bufferd;
    scanf("%lf", &raw_put);
    bufferu = raw_put / 60;
    bufferu = modf(bufferu, &bufferd);
    min = (int)bufferu;
    sec = (int)(bufferd * 60);
    bufferu = min / 60;
    bufferu = modf(bufferu, &bufferd);
    hrs = (int)bufferu;
    min = (int)(bufferd * 60);
    bufferu = hrs / 24;
    bufferu = modf(bufferu, &bufferd);
    day = (int)bufferu;
    hrs = (int)(bufferd * 24);
    printf("%d s = %d d %d h %d m %d s", raw_put, day, hrs, min, sec);
    return 0;
}