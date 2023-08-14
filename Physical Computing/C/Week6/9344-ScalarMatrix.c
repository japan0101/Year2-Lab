#include<stdio.h>
int main(){
    double matA[3][3];
    scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", \
    &matA[0][0], &matA[0][1], &matA[0][2],\
    &matA[1][0], &matA[1][1], &matA[1][2],\
    &matA[2][0], &matA[2][1], &matA[2][2]);

    if (matA[0][0] == matA[1][1] && matA[1][1] == matA[2][2])
    {
        if ((matA[0][1] == 0 && matA[0][2] == 0 && matA[1][2] == 0 && matA[1][0] == 0 && matA[2][0] == 0 && matA[2][1] == 0))
        {
            printf("This is a scalar matrix");
            return 0;
        }
        
    }
    printf("This is not a scalar matrix");
    return 0;
}
