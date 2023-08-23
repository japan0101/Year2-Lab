#include<stdio.h>
int fibbo(int num);

int main(){
    int destination;
    scanf("%d", &destination);
    printf("method = %d", fibbo(destination));
}

int fibbo(int num){
    if (num == 0 || num == 1)
    {
        return 1;
    }else{
        return fibbo(num - 1) + fibbo(num - 2);
    }
}