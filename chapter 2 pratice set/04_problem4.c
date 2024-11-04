//Author = PC

#include<stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y - z+k, where x = 2 , y=3 , z=4 , k=1
    int x = 2 , y=3 , z=3 , k=1;
    float a;
    a = 3*x/y - z+k;
    // 6/y - z+k
    // 2 -z+k
    // -1+k
    // -1+1
    // 0
    printf("The value of a is %f\n",a);
    return 0;
}