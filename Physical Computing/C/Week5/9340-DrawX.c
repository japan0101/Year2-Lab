#include<stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    for(int row = 0; row < size; row++){
        for(int col=0; col < size; col++){
            if(col == row || col == size - row - 1){
                printf("-");
            }else printf("#");
        }
        printf("\n");
    }
}