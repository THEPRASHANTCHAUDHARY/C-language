#include<stdio.h>

int* sum(int a, int b){
    int s=a+b;
    int* ptr = &s;
    printf("The sum is %d\n",s);
    return ptr;
}

float* avg(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %f\n",avg);
    return ptr;
}

int main(){
    int x = 5;
    int y = 7;

    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = avg(x,y);

    printf("The address of sum is %u and average is %u",ptr1,ptr2);
    return 0;
}