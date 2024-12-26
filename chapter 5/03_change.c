#include<stdio.h>

// Function prototype
int change(int a);


// Function definition
int sum(int a){
    a = 77; // Misnomer
    return 0;
}


int main()
{
    int b = 22;
    change(b); // The value of b remains 22
    printf("b is %d\n",b);

    return 0;
}