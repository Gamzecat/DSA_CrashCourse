#include <stdio.h>

int main()
{

    int numbers[10];
    int scores[5];
    int grades[5];

    printf("Enter 5 scores: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &scores[i]);
    }

    printf("Enter 5 grades: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &grades[i]);
    }

    printf("Scores and Grades: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Score: %d, Grade: %d \n", scores[i], grades[i]);
    }

    printf("First score: %d, First grade: %d \n", scores[0], grades[0]);
    printf("Last score: %d, Last grade: %d \n", scores[4], grades[4]);

    scores[2] = 95;

    int size = sizeof(scores) / sizeof(scores[0]);
    int grade_size = sizeof(grades) / sizeof(grades[0]);
    printf("Size of scores array: %d \n", size);
    printf("Size of grades array: %d \n", grade_size);

    for (int i = 0; i < 5; i++)
    {
        printf("Score: %d, Grade: %d \n", scores[i], grades[i]);
    }

    return 0;
}