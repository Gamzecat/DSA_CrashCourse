#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 42;
    int *ptr = &x;     // Initialize a pointer to an integer and assign it the address of x
    int **pptr = &ptr; // Initialize a pointer to a pointer to an integer and assign it the address of ptr

    printf("Value of x: %d\n", x);

    printf("*ptr: %d\n", *ptr);
    printf("**ptr :%d\n", **pptr);

    int rows = 3;
    int cols = 4;

    int **matrix = (int **)malloc(rows * sizeof(int *)); // Allocate memory for an array of pointers (rows)

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int)); // Allocate memory for each row (columns)
    }

    matrix[1][2] = 99;

    printf("Matrix[1][2] : %d\n", matrix[1][2]);

    for (int i = 0; i < rows; i++) // Free the allocated memory for each row
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}