#include<stdio.h>

int main(){
    float income,tax = 0;
    printf("Enter income :\n");
    scanf("%f",&income);

    if(income<=250000){
        tax = 0;
    }

    else if(income>250000 && income<=500000){
        tax = 0.05 * (500000 - 250000);
    }
    
    else if(income>500000 && income<=1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000);
    }
    
    else if(income>1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }

    printf("The total tax you need to pay is %f",tax);
    return 0;
}