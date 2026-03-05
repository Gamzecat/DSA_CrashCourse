#include <stdio.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Alternative way to pass array to function
void print_array_v2(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Function to double the values in the array
void print_array_double(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}
int main()
{

    int numbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    print_array(numbers, size);
    print_array_double(numbers, size);
    printf("After doubling the array: \n");
    print_array(numbers, size);

    return 0;
}