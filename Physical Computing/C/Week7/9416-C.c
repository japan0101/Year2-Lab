#include<stdio.h>
#include<math.h>
void printOut(int numA, int numB, double result);

int main(){
    int numA, numB;
    scanf("%d %d", &numA, &numB);
    printOut(numA, numB, sqrt(pow(numA, 2) + pow(numB, 2)));
    // printf("sqrt(%d^2+%d^2)=%.2lf", numA, numB, sqrt(pow(numA, 2) + pow(numB, 2)));
}

void printOut(int numA, int numB, double result){
    printf("sqrt(%d^2+%d^2)=%.2lf", numA, numB, result);
}