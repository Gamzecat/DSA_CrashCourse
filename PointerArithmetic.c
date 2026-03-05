#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // or int *ptr = &arr[0]; // Both are valid ways to initialize a pointer to the first element of the array
    printf("Ptr pointers to %d\n", *ptr);

    ptr++;
    printf("After ptr++: %d\n", *ptr);
    ptr += 2;
    printf("After ptr+=2: %d\n", *ptr);

    printf("arr[2] = %d\n", arr[2]);
    printf("*(arr+2) = %d\n", *(arr + 2));

    int *p1 = &arr[4];
    int *p2 = &arr[1];
    printf("Difference between p1 and p2: %ld\n", p1 - p2);

    return 0;
}