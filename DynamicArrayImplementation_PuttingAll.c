#include <stdio.h>
#include <stdlib.h>
// This code demonstrates the implementation of a dynamic array in C. The DynamicArray structure contains a pointer to an integer array, its current size, and its capacity.
// The create_array function initializes a dynamic array with a specified initial capacity. The append function adds new elements to the array, resizing it when necessary.
// The get function retrieves an element at a specified index, and the free_array function deallocates the memory used by the dynamic array.
//

typedef struct
{
    int *data;
    int size;
    int capacity;

} DynamicArray;

DynamicArray *create_array(int initial_capacity)
{
    DynamicArray *arr = (DynamicArray *)malloc(sizeof(DynamicArray));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    arr->data = (int *)malloc(initial_capacity * sizeof(int));
    if (arr->data == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free(arr);
        return NULL;
    }
    arr->size = 0;
    arr->capacity = initial_capacity;
    return arr;
}

void append(DynamicArray *arr, int value)
{
    if (arr->size == arr->capacity)
    {
        arr->capacity *= 2;
        int *new_data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
        if (new_data == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            return;
        }
        arr->data = new_data;
        printf("Array resized to capacity: %d\n", arr->capacity);
    }
    arr->data[arr->size++] = value;
}

int get(DynamicArray *arr, int index)
{
    if (index < 0 || index >= arr->size)
    {
        fprintf(stderr, "Index out of bounds\n");
        return -1; // Return an error value
    }
    return arr->data[index];
}

void free_array(DynamicArray *arr)
{
    free(arr->data);
    free(arr);
}

int main()
{

    DynamicArray *arr = create_array(2);

    for (int i = 0; i < 10; i++)
    {
        append(arr, i * 10);
    }

    printf("Array contents: \n");
    for (int i = 0; i < arr->size; i++)
    {
        printf("arr[%d] = %d\n", i, get(arr, i));
    }
    printf("Array size: %d, capacity: %d\n", arr->size, arr->capacity);

    free_array(arr);

    return 0;
}