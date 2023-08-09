#include<stdio.h>
int main(){
    char first_name[30], last_name[30];
    int stuid, dd, mm, yyyy;
    float gpa;
    scanf("%s\n", first_name);
    scanf("%s\n", last_name);
    scanf("%d\n", &stuid);
    scanf("%d/%d/%d\n", &dd, &mm, &yyyy);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\nID: %08d\nDOB: %02d-%02d-%04d\nGPA: %.2f", first_name, last_name, stuid, dd, mm, yyyy, gpa);
    return 0;
}