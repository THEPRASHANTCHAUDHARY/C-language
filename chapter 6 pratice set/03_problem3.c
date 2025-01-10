#include<stdio.h>

void change_to_ten_times(int*);

void change_to_ten_times(int* a){
    *a = *a * 10;
}



int main(){
    int a;
    printf("Enter the value :");
    scanf("%d",&a);
    change_to_ten_times(&a);
    printf("The ten times value of the number is %d\n",a);
    return 0;
}