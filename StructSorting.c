#include <stdio.h>
#include <string.h>

// Exercise 3: Sort an array of structs by a specific field.
// Define a structure for a person with name and age fields
// The sort_by_age function implements a simple bubble sort algorithm to sort the array of Person structs based on the age field. It compares adjacent elements and swaps them if they are in the wrong order.

typedef struct
{
    char name[50];
    int age;
} Person;

void sort_by_age(Person arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    { // Outer loop to traverse through the array
        for (int j = 0; j < size - i - 1; j++)
        { // Inner loop to compare adjacent elements
            if (arr[j].age > arr[j + 1].age)
            { // Compare the age field of adjacent elements
                Person temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    Person family[] = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35},
        {"Diana", 28},
    };

    int size = sizeof(family) / sizeof(family[0]);

    printf("Before sorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%s: %d \n", family[i].name, family[i].age);
    }

    sort_by_age(family, size); // Sort the array of structs by age

    printf("\n After sorting by age: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%s: %d \n", family[i].name, family[i].age);
    }

    return 0;
}