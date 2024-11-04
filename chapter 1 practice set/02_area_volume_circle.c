#include<stdio.h>

// int main(){
//     int radius,height;
//     float volume,area;
//     printf("Enter the radius of the circle and height of the cylinder\n");
//     scanf("%d%d",&radius,&height);
//     area = 3.14*radius*radius;
//     volume = 3.14*radius*radius*height;
//     printf("Area of circle is %f\n",area);
//     printf("Volume of cylinder with radius %d and height %d is %f\n",radius,height,volume);
//     return 0;
// }

int main(){
    int radius = 6;
    int height = 10;
    printf("Area of circle with radius %d is %f\n",radius,3.14*radius*radius);
    printf("Volume of cylinder with radius %d and height %d is %f\n",radius,height,3.14*radius*radius*height);
    return 0;
}

