#include<stdio.h>

int main(){
    int sum=0,a;

    while(1)
    {
        printf("\nEnter the value for sum and 0 for terminate it :-");
        scanf("%d",&a);   
        if(a==0)
            break;
        sum=sum+a;
        printf("The sum of numbers till now =%d",sum); 
            continue;
    }
    
    return 0;
}