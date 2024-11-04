#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char) );
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float)); 
    // Above these three lines are not executing expected result may be due to using old IDE.

    // So we are using this
    printf("Size of char: %lu bytes\n", (unsigned long)sizeof(char));
    printf("Size of int: %lu bytes\n", (unsigned long)sizeof(int));
    printf("Size of float: %lu bytes\n", (unsigned long)sizeof(float));


    return 0;
}