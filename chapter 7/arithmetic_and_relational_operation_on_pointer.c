#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Points to the first element of the array

    printf("Value at the address: %d\n", *ptr);
    printf("Pointer before addition: %u\n", (void *)ptr);

    ptr = ptr + 2; // Move pointer to the third element
    printf("Pointer after addition: %u\n", (void *)ptr);
    printf("Value at the new address: %d\n", *ptr);

    ptr = ptr - 1; // Move pointer to the second element
    printf("Pointer after substraction: %u\n", (void *)ptr);
    printf("Value at the new address: %d\n", *ptr);

    int *ptr1 = &arr[3];
    int *ptr2 = &arr[1];
    int difference = (*ptr1 - *ptr2);
    printf("Pointer 1 points to: %u\n", (void *)ptr1);
    printf("Pointer 2 points to: %u\n", (void *)ptr2);
    printf("Difference in elemets is %d\n", difference);


    // Comparision between two pointers
    int a = 10, b = 20;
    int *ptr3 = &a;
    int *ptr4 = &b;

    if (ptr3 == ptr4)
    {
        printf("Both pointers point to the same location.\n");
    }
    else
    {
        printf("Pointers point to different locations.\n");
    }

    return 0;
}
