//Author = PC

#include<stdio.h>

int main(){
    int a = 6;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and the value of b is %d then sum of this is %d\n",a,b,c);
    // Modulus operator is used to get remaider.
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // This does not work for exponentiation in c.
    // d = a^b
    return 0;
}