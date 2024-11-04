//Author = PC

#include<stdio.h>

int main(){
    float f,c;
    printf("Enter the degree in celcius\n");
    scanf("%f",&c);
    f= ((9.0/5.0)*c)+32;
    printf("Degree in fahrenheit is %f\n",f);
    return 0;
}