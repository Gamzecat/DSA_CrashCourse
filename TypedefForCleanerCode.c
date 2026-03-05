#include <stdio.h>
// method 1: typedef after defining the struct
struct Point
{
    int x;
    int y;
};
typedef struct Point Point; // Create a typedef for the struct Point, allowing us to use 'Point' instead of 'struct Point'

// method 2: typedef while defining the struct
typedef struct
{
    int x;
    int y;
} Point2D; // Define the struct and create a typedef for it in one step, allowing us to use 'Point2D' instead of 'struct Point2D'

int main()
{
    struct Point p1 = {10, 20}; // Using the struct definition without typedef
    Point2D p2 = {30, 40};      // Using the typedef for the struct

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}