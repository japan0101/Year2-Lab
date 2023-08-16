#include<stdio.h>
#include<string.h>
int main(){
    char words[200], solved[200];
    char wheel[26] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k', 'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z', 'g', 'w', 'i'},
    bwheel[26] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G', 'W', 'I'};
    scanf("%[^\n]s", &words);
    for (int i = 0; i < strlen(words); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (words[i] == wheel[j] && j < 21)
            {
                solved[i] = wheel[(j + 5)];
                break;
            }else if(words[i] == wheel[j] && j >= 21)
            {
                solved[i] = wheel[(4 - (25 - j))];
                break;
            }
        }
        for (int j = 0; j < 26; j++)
        {
            if (words[i] == bwheel[j] && j < 21)
            {
                solved[i] = bwheel[(j + 5)];
                break;
            }else if(words[i] == bwheel[j] && j >= 21)
            {
                solved[i] = bwheel[4 - (25 - j)];
                break;
            }
        }
        if (words[i] == ' ')
        {
            solved[i] = ' ';
        }
    }
    for (int i = 0; i < strlen(words); i++)
    {
        printf("%c", solved[i]);
    }
    return 0;
}