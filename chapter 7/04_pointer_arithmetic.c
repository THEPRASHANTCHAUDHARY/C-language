#include<stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTER
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The address of a is %u\n",ptr);
    // return 0;

    char a = 'A';
    char* ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The address of a is %u\n",ptr);
    return 0;
}