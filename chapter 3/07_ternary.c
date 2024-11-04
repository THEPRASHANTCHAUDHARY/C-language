#include<stdio.h>

int main(){
    int age;
    printf("Enter your age :-");
    scanf("%d",&age);
    (age>=18)? printf("You can eligible for vote and you can vote !!!\n") : printf("You can't vote bcz you are minor\n");        

    return 0;
}       




// #include<stdio.h>

// int main(){
//     int age;
//     printf("Enter your age :-");
//     scanf("%d",&age);
//     const char * eligibility=(age>=18)? "You can eligible for vote and you can vote !!!" : "You can't vote bcz you are minor";
//     printf("%s\n",eligibility);         

//     return 0;
// }       