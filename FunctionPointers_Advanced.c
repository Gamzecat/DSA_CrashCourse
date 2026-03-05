#include <stdio.h>
// Function that takes two ints and returns an int
//  Function pointer declaration: int (*func_ptr)(int, int);
//  func_ptr can point to any function that takes two ints and returns an int, such as add or multiply
//  Use case in DSA: Compararison functions for sorting algorithms, callback functions for data processing, etc.

int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}

int apply_operation(int x, int y, int (*operation)(int, int))
{
    return operation(x, y);
}

int main()
{
    int (*func_ptr)(int, int);                // Declare a function pointer that can point to a function taking two ints and returning an int
    func_ptr = add;                           // Point to the add function
    printf("Additon : %d\n", func_ptr(5, 3)); // Call the function through the pointer

    func_ptr = multiply;                             // Point to the multiply function
    printf("Multiplication : %d\n", func_ptr(5, 3)); // Call the function through the pointer

    printf("Result: %d\n", apply_operation(4, 7, add));      // Pass the add function as an argument
    printf("Result: %d\n", apply_operation(4, 7, multiply)); // Pass the multiply function as an argument

    return 0;
}