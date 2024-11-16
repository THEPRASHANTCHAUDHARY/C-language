#include<stdio.h>

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
           // PROGRAM USING WHILE LOOP
        int i = 2;
        // while (i < n)                 
        // {

        //     if (n % i == 0 && n != 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // }


        // PROGRAM USING DO WHILE LOOP
        do
        {

            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }while(i < n);
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