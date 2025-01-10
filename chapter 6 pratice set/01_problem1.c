#include<stdio.h>

int main(){
    int a=5;
    int* ptr=&a;
    printf("The address of a is %u and %p\n",&a,&a); // %u is for unsigned or integer address type and %p is for pointer
    printf("The value of a is %d\n",*ptr);
    return 0;
}