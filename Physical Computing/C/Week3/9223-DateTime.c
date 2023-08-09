#include<stdio.h>
int main(){
    int day, hrs, min, sec, raw_put;
    scanf("%d", &raw_put);
    min = raw_put / 60;
    sec = raw_put % 60;
    hrs = min / 60;
    min = min % 60;
    day = hrs / 24;
    hrs = hrs % 24;
    printf("%d s = %d d %d h %d m %d s", raw_put, day, hrs, min, sec);
    return 0;
}