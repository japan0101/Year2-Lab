#include<stdio.h>
#include<ctype.h>
int main(){
    char ch1;
    scanf("%c", &ch1);
    if(isdigit(ch1)){
        printf("number");
    }else if(isupper(ch1)){
        printf("uppercase");
    }else if(islower(ch1)){
        printf("lowercase");
    }else{
        printf("error");
    }
    return 0;
}