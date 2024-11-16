#include<stdio.h>

int main(){
    int i=1,sum=0;
    do
    {
        sum += i;  // sum=sum+i;
        i+=1;
    }while(i<=10);
    printf("The sum of first 10 natural numbers is %d.\n",sum);
    return 0;
}