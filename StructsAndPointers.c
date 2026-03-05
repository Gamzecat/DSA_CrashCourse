#include <stdio.h>
#include <stdlib.h>
// This code demonstrates the use of structures and pointers in C. It defines a Point structure, functions to print and move a point, and shows how to dynamically allocate memory for a Point.
// use (->) operator for pointer to struct, . for struct variable

typedef struct
{
    int x;
    int y;
} Point;

void print_point(Point *p)
{
    printf("Point: (%d, %d)\n", p->x, p->y); // Use the arrow operator(->) to access members of the struct through a pointer
}

void move_point(Point *p, int dx, int dy)
{ // Function to move a point by dx and dy
    p->x += dx;
    p->y += dy;
}

int main()
{
    Point p1 = {10, 20};
    print_point(&p1);        // Pass the address of p1 to the function
    move_point(&p1, 5, -10); // Move the point by (5, -10)
    print_point(&p1);        // Print the new position of the point

    Point *p2 = (Point *)malloc(sizeof(Point)); // Dynamically allocate memory for a Point
    if (p2 == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    p2->x = 30;
    p2->y = 40;
    print_point(p2); // Print the point using the pointer

    free(p2); // Free the allocated memory

    return 0;
}