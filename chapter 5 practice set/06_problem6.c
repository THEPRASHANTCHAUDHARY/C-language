#include<stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    if(n==1)
    {
        return 1;
    }
    // sum n = 1 + 2 + 3 + 4 + 5 + 6 + ... +n
    // sum(n)=sum(n-1)+sum(n)
    return sum_natural(n-1) + n;
}
int main(){
    int n;
    printf("Enter the number :-");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is %d.\n",n,sum_natural(n));
    return 0;
}