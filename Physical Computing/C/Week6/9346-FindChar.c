#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main(){
    char full[300], want;
    int founded = 0, found = 0, foundAt[300];
    scanf("%[^\n]s", &full);
    scanf("\n%c", &want);
    for (int i = 0; i < 300; i++)
    {
        if (tolower(full[i]) == tolower(want))
        {
            found += 1;
            founded = 1;
            foundAt[found - 1] = i + 1;
        }
    }
    if(found){
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", found, want);
        for (int i = 0; i < found - 1; i++)
        {
            printf("%d, ", foundAt[i]);
        }
        printf("%d", foundAt[found - 1]);
    }else{
        printf("Not found.");
    }
}
