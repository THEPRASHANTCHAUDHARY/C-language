//Author = PC

#include<stdio.h>

int main(){
    float p,r,t,s;
    printf("Enter the value of principal, rate and time\n");
    scanf("%f%f%f",&p,&r,&t);
    s = (p*r*t)/100;
    printf("The simple intrest for the given values is %f\n",s);
    return 0;
}