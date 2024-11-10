#include<stdio.h>

int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);

    if((year %4==0 && year%400!=0) || year%400 ==0){
        printf("This is leap year\n");
    }

    else{
        printf("Not a leap year\n");
    }
    return 0;
}