#include<stdio.h>
int main(){
    char ch1, ch2, ch3, ch4, ch5;
    scanf("%c\n%c\n%c\n%c\n%c", &ch1, &ch2, &ch3, &ch4, &ch5);
    int ascii1, ascii3, ascii5;
    ascii1 = ch1;
    ascii3 = ch3;
    ascii5 = ch5;
    char new1, new3, new5;
    new1 = ascii1 + 1;
    new3 = ascii3 + 1;
    new5 = ascii5 + 1;
    printf("%c\n%c\n%c\n%c\n%c", new1, ch2, new3, ch4, new5);
    return 0;
}