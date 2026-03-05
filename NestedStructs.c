#include <stdio.h>

typedef struct // Define a structure named Date
{
    int daty;
    int month;
    int year;
} Date;

typedef struct // Define a structure named Person that contains a Date structure as a member
{
    char name[50];
    int id;
    Date birth_date;
} Person;
int main()
{

    Person person = {
        .name = "Alice",
        .id = 12345,
        .birth_date = {
            .daty = 15,
            .month = 6,
            .year = 1990}};
    printf("%s was born on %d / %d / %d\n",
           person.name,
           person.birth_date.daty,
           person.birth_date.month,
           person.birth_date.year);

    return 0;
}