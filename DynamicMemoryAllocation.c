#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc(size) = allocates a block of memory of the specified size and returns a pointer to the beginning of the block.
    //  The contents of the allocated memory are not initialized, so they may contain garbage values.
    //  If the allocation fails, it returns NULL.

    // calloc(num, size) = allocates memory for an array of num elements, each of them size bytes long, and initializes all bytes in the allocated storage to zero.
    //  If the allocation fails, it returns NULL.

    // realloc(ptr, size) = changes the size of the memory block pointed to by ptr to size bytes. The contents will be unchanged in the range from the start of the region up to the minimum of the old and new sizes.
    //  If the new size is larger than the old size, the added memory will not be initialized.
    //  If the allocation fails, it returns NULL.

    // free(ptr) = deallocates the memory previously allocated by a call to malloc, calloc, or realloc.
    //  The pointer ptr must have been returned by an earlier call to malloc, calloc, or realloc.
    //  If ptr is NULL, no operation is performed.

    // Example of dynamic memory allocation using malloc

    int n;
    printf("Enter array size: \n");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); // Allocate memory for n integers
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);  // Deallocate the memory
    arr = NULL; // Avoid dangling pointer

    return 0;
}