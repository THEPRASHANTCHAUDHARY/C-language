#include<stdio.h>

int main(){
    int product = 1 ,i = 1,n;
    printf("Enter the value for finding factorial :");
    scanf("%d",&n);
    while (i<=n)
    {
        product*=i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,product);
    return 0;
}