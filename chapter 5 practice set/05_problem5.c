#include<stdio.h>

int main(){
    int a=4;
    printf("%d %d %d\n", a, ++a, a++);
    // 6 6 4 is the answer.
    // 4 5 5 is also the answer. due to evaluation order of compiler
    return 0;
}