#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks (Out of 100) :-");
    scanf("%d",&marks);
    (marks>=90)?printf("Distinction\n"):(marks>=60)?printf("First class\n"):(marks>=40)?printf("Pass\n"):printf("Fail\n");
    return 0;
}