#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}

void capitalize(char *str){
    for (int i = 0; i < strlen(str); i++)
    {
        if (i == 1 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }else{
            str[i] = tolower(str[i]);
        }
    }
}

int main(){
    
    char nameArray[20][60], name[60], buffer[60];
    for (int i = 0; i < 20; i++)
    {
        scanf(" %[^\n]s", &name);
        capitalize(name);
        for (int j = 0; j < strlen(name); j++)
        {
            nameArray[i][j] = name[j];
        }
        
        
    }
    qsort(nameArray, 20, sizeof(nameArray[1]), cmpfunc);
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < strlen(name); j++)
        {
            printf("%s", nameArray[i][j]);
        }
        printf("");
    }
    
}