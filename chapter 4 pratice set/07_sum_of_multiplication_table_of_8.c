#include<stdio.h>

int main(){
    int i,sum=0,a=8;
    for ( i = 1; i <= 10; i++)
    {
        sum += (a*i);// sum=sum+(a*i);
    }
    printf("The sum of table of 8 is %d.\n",sum);
    
    return 0;
}