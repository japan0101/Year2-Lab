#include<stdio.h>
int main(){
    int round, n;
    scanf("%d", &round);
    n = 1;
    while(n <= round)
    {
        printf("%d ", n);
        n++;
    }
    return 0;
}