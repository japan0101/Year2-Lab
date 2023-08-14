#include<stdio.h>
#include<string.h>
int main(){
    char forward[100];
    scanf("%[^\n]s", &forward);
    for (int i = strlen(forward) - 1; i >= 0; i--)
    {
        printf("%c", forward[i]);
    }
    return 0;
}
