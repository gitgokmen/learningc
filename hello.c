#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 25;
    float gpa = 3.73;
    char grade = 'A';
    printf("You are %d years old.\n", age);
    printf("Your gpa is %.1f\n", gpa);
    printf("Your grade is %c \n", grade);

    char name[] = "Gokmen Budak";

    printf("Hello, %s\n", name);

    bool isOnline = true;

    if (isOnline)
    {
        printf("You are ONLINE!");
    }
    else
    {
        printf("You are OFFLINE!");
    }

    return 0;
}