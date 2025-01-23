#include<stdio.h>

int main(){
    int marks[] = {34,53,54,56};

    int *ptr = &marks[0]; // same as int *ptr = marks;

    for(int i=0; i<4; i++){
        printf("The marks at index %d is %d\n",i,marks[i]);
        printf("The marks at index %d is %d\n",i,*ptr);  // These two lines of codes are same.
        ptr++;
    }

    return 0;
}