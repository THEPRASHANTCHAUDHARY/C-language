#include<stdio.h>

int main(){
    int i,z=1;
    printf("Enter the value of i :");
    scanf("%d",&i);
    do
    {
        printf("%d\n",z);
        z++;
    } while (z<=i);
    
    return 0;
}