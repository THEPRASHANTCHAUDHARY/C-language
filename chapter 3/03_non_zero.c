#include<stdio.h>

int main(){
    if(0){ // This is considered as false or we can say 0 is considered as false in c language.
        printf("This is executed!\n");
    }
    if(2345){ //Non zero value is considered as true!!!
        printf("This if is also executed!\n");
    }
    if(3.5){ //Non zero value is considered as true!!!
        printf("This if is also executed!\n");
    }
    if('z'){ //Non zero value is considered as true!!!
        printf("This if is also executed!\n");
    }
    return 0;
}