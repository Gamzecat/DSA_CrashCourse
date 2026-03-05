#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr + 2)); // Both arr[2] and *(arr + 2) access the same element (30)
    printf("%d\n", 2 [arr]);

    int *ptr = arr;       // or int *ptr = &arr[0]; // Both are valid ways to initialize a pointer to the first element of the array
    printf("%d\n", *ptr); // Output: 10

    ptr = &arr[3];

    return 0;
}