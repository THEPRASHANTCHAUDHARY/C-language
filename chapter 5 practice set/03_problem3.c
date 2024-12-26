#include<stdio.h>

float forceofattraction(float);

float forceofattraction(float m)
{
    float g=9.8;
    return m*g;
}

int main(){
    float m=4;
    printf("The force of attraction on mass %.2f KG is %.2f N\n",m,forceofattraction(m));
    return 0;
}