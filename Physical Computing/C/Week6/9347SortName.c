#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return strcmp((const char*)a , (const char*)b);
}

void capitalize(char *str){
    for (int i = 0; str[i] != 0; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }else{
            str[i] = tolower(str[i]);
        }
    }
}

int main(){
    
    char nameArray[20][60], name[60];
    for (int i = 0; i < 20; i++)
    {
        scanf(" %[^\n]s", nameArray[i]);
        capitalize(nameArray[i]);
    }
    qsort(nameArray, 20, sizeof(nameArray[2]), cmpfunc);
    for (int i = 0; i < 20; i++)
    {
            printf("%s\n", nameArray[i]);
    }
    
}