#include <stdio.h>
#include <string.h>
// A structure (struct) is a user-defined data type in C that allows you to group different types of variables together under a single name.
//  It is used to represent a record or an object that has multiple attributes. Each variable within a structure is called a member or field of the structure.
//  Use case in DSA: Structures are commonly used to represent complex data entities such as nodes in a linked list, elements in a binary tree, or records in a database.
struct Student // Define a structure named Student
{
    int id;
    char name[50];
    float gpa;
};
int main()
{

    struct Student s1;
    s1.id = 12345;
    strcpy(s1.name, "Alice");
    s1.gpa = 3.8;

    struct Student s2 = {12346, "Bob", 3.5};

    struct Student s3 = {.id = 12347, .name = "Charlie", .gpa = 3.9};

    printf("Student: %s (ID: %d, GPA: %.2f)\n", s1.name, s1.id, s1.gpa);
    printf("Student: %s (ID: %d, GPA: %.2f)\n", s2.name, s2.id, s2.gpa);
    printf("Student: %s (ID: %d, GPA: %.2f)\n", s3.name, s3.id, s3.gpa);

    return 0;
}