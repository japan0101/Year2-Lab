#include<stdio.h>
#include<string.h>
int main(){
    char forward[100], backward[100];
    int pos = 0, isPalindrome = 1;
    scanf("%[^\n]s", &forward);
    for (int i = strlen(forward) - 1; i >= 0; i--)
    {
        backward[pos] = forward[i];
        pos++;
    }
    for (int i = 0; i < strlen(forward) - 1; i++)
    {
        if (backward[i] != forward[i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("It is Palindrome.");
    }else{
        printf("It is not Palindrome.");
    }
    
    return 0;
}