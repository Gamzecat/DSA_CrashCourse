#include <stdio.h>
// This code demonstrates how to reverse an array in C using pointers.
// The reverse_array function takes an array and its size as arguments, and uses two pointers (start and end) to swap elements until they meet in the middle.
// The main function prompts the user to enter the size of the array and its elements, then calls the reverse_array function and prints the original and reversed arrays.
void reverse_array(int arr[], int size)
{
    int *start = arr;          // point to the first element
    int *end = arr + size - 1; // point to the last element

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    int numbers[20];
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Original array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", numbers[i]);
    }

    reverse_array(numbers, size);

    printf("Reversed array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", numbers[i]);
    }

    return 0;
}