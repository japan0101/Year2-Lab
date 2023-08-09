#include<stdio.h>
int main(){
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    while(n != -9){
        sum += n;
        scanf("%d", &n);
    }
    printf("%d", sum);
}