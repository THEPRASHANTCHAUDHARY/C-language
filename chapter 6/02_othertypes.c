#include<stdio.h>

int main(){
    char i= 'A';
    char* j= &i; // J is a pointer pointing to i ( j is a character pointer )
    
    float k=5.232;
    float*k1=&k;
    printf("The address of i is %p\n",&i); // %p is for address of pointer and %u is for unsigned int address
    printf("The address of i is %d\n", j);
    printf("The address of k is %d\n", &k);
    
    
    printf("The value at address j is %d\n",*(&i));
    
    return 0;
}