#include<stdio.h>
int main(){
    int size, width, height;
    scanf("%d", &size);
    height = size;
    width = size * 2 - 1;
    for(int row = 0; row < height; row++){
        for(int col=1; col <= width; col++){
            if((col >= size - row && col <= size + row)){
                printf("*");
            }else printf(" ");
        }
        printf("\n");
    }
}