#include <stdio.h>

int main()
{
    int x = 42;
    int *ptr;

    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value of ptr: %p\n", (void *)ptr);
    printf("Value at ptr: %d\n", *ptr);

    *ptr = 100;
    printf("New value of x: %d\n", x);

    return 0;
}