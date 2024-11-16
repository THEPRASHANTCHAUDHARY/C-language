#include<stdio.h>

int main(){
    int i=1,a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    for(i;i<=10;i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}