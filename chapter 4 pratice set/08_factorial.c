#include<stdio.h>

int main(){
    int product = 1,i, n;
    printf("Enter the value for finding factorial :");
    scanf("%d",&n);
    for ( i=1; i<=n ; i++)
    {
        product *=i;
    }
    
    printf("Factorial of %d is %d\n",n,product);
    return 0;
}