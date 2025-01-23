#include<stdio.h>

int main(){
    int marks[90];  // Reserve space to store 90 integers

    marks[1] = 34;
    marks[2] = 90;
    // We can go all the way till [89]
    printf("Marks are %d,%d\n",marks[1],marks[2]);

    return 0;
}