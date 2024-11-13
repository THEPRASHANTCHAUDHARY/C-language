#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            break;
            // continue;
        }
        printf("i = %d\n",i);
    }
    
    return 0;
}