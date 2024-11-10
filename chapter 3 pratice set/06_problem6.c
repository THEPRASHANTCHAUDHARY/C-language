#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the value of a,b,c and d respectively\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
        printf("The greatest of all is %d\n",a);
    }

    else if(b>a && b>c && b>d){
        printf("The greatest of all is %d\n",b);
    }

    else if(c>b && c>a && c>d){
        printf("The greatest of all is %d\n",c);
    }

    else if(d>b && d>c && d>a){
        printf("The greatest of all is %d\n",d);
    }
    return 0;
}