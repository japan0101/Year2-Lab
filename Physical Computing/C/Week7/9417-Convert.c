#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<strings.h>
char flipcase(char character);

int main(){
    char words1[101], words2[101];
    int same = 1, i = 0;
    scanf("%[^\n]s", &words1);
    scanf("\n%[^\n]s", &words2);
    while (words1[i] != 0 || words2[i] != 0)
    {
        words1[i] = flipcase(words1[i]);
        words2[i] = flipcase(words2[i]);
        i++;
    }
    printf("*** Results ***\n%s\n%s\n***************\n", words1, words2);
    if (strcasecmp(words1, words2) == 0)
    {
        printf("Both strings are the same.");
    }else{
        printf("Both strings are not the same.");
    }
    
}

char flipcase(char character){
    if(islower(character)){
            character = toupper(character);
        }else{
            character = tolower(character);
        }
        return character;
}
