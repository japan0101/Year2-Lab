#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    int count;
    scanf("%d\n", &count);
    char tracker[count], tracking;
    int counter[count], pointer = 0;
    for (int i = 0; i < count; i++)
    {
        tracker[i] = '-';
    }
    for (int i = 0; i < count - 1; i++)
    {
        scanf("%c\n", &tracking);
        for (int j = 0; j < count; j++)
        {
            if (tracker[j] == '-')
            {
                tracker[j] = tolower(tracking);
                counter[j] = 1;
                pointer++;
                break;
            }else{
                if (tolower(tracker[j]) == tolower(tracking))
                {
                    counter[j] += 1;
                    break;
                }
            }
        }
    }
    scanf("%c", &tracking);
    for (int j = 0; j < count; j++)
    {
        if (tracker[j] == '-')
        {
            tracker[j] = tolower(tracking);
            counter[j] = 1;
            pointer++;
            break;
        }
        else
        {
            if (tolower(tracker[j]) == tolower(tracking))
            {
                counter[j] += 1;
                break;
            }
        }
    }
    for (int i = 0; i < pointer - 1; i++)
    {
        printf("%c: %d\n", tracker[i], counter[i], pointer);
    }
    printf("%c: %d", tracker[pointer - 1], counter[pointer - 1]);
    return 0;
}