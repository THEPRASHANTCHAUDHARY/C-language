#include<stdio.h>

// fibonacci(n)=fibonacci(n-1)+fibonacci(n-2)

int fibonacci(int);

int fibonacci(int n){
    if (n==1 || n==2)
    {
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    printf("Enter the number :-");
    scanf("%d",&n);
    printf("The value of fibonacci series at position %d is %d\n",n,fibonacci(n));    
    return 0;
}