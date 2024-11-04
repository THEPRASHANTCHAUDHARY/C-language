#include<stdio.h>

int main(){
    float a,b,c,d;
    int choice;
    printf("Enter your choice (1 for rectangle's length & breadth or 2 for triangles base & height) :-");
    scanf("%d",&choice);
    (choice==1)?printf("Enter the value of length and breadth respectively\n"),scanf("%f%f",&a,&b),printf("Area of rectangle is %f",a*b):
    (choice==2)?printf("Enter the value of base and height respectively\n"),scanf("%f%f",&c,&d),printf("area of triangle is %f",0.5*c*d):
    printf("Enter correct choice !!!!!\n");
    return 0;
}