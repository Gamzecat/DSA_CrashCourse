#include <stdio.h>
// This code demonstrates the use of an array of structures in C. We define a Student structure with a name and score, and then create an array of Student structures to store information about multiple students.
// We also find and print the student with the highest score.
typedef struct
{
    char name[50];
    int score;
} Student;

int main()
{
    Student class[3] = {
        {"Alice", 85},
        {"Bob", 90},
        {"Charlie", 78}};

    int max_score = class[0].score;
    int max_index = 0;
    for (int i = 1; i < 3; i++)
    {
        if (class[i].score > max_score)
        {
            max_score = class[i].score;
            max_index = i;
        }
    }

    printf("Top student: %s with score %d\n",
           class[max_index].name, class[max_index].score);

    return 0;
}