#include<stdio.h>

int main(){
    int sum=0;
    for (int i = 1; i < 11; i++)
    {
        sum+=i;
    }
    printf("The sum of first 10 natural number is %d.\n",sum);
    
    return 0;
}