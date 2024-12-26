#include<stdio.h>
float temperature(float); // Function Prototype

float temperature(float c)
{
    return (9.0/5.0)*c+32;
}

int main(){
    float c=-40.0;
    printf("The temperature for %f in Fahrenheit is %.2f\n",c,temperature(c));
    return 0;
}