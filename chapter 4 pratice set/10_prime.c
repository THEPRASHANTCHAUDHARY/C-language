#include<stdio.h>
// PROGRAM FOR PRIME NUMBERS 
int main(){
    int n;
    int not_prime=0;
    printf("Enter a non-negative integer :-");
    scanf("%d",&n);

    if(n==0 || n==1)
    {
        not_prime=1;
    }

    else
    {
        for (int i = 2; i < n; i++)         
        {
            if(n%i==0 && n!=2)
            {
                not_prime=1;
                break;
            }
        }
        
    }

    if(not_prime)
    {
        printf("%d is not prime\n",n);
    }

    else
    {
        printf("%d is prime\n",n);
    }
    return 0;
}




/*#include<stdio.h>

int main(){
    int a,i;
    printf("Enter the number :");
    scanf("%d",&a);
    if (a==0 || a==1 )
    {
        printf("Not prime\n");
    }

    else if (a==2)
    {
        printf("Prime\n");
    }
    
    else 
    {      
    for ( i = 2; i < a-1; i++)
    {
        if(a%i==0)
        {
            printf("Not prime\n");
            break;
        }
        else
        {
            printf("prime\n");
            break;
        }
    }
    }
    
    return 0;
}*/
