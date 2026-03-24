#include <stdio.h>

int main()
{

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your GPA:");
    scanf("%f", &gpa);
    printf("What is your grade? ");
    scanf(" %c", &grade);
    getchar(); // Clears the new line character.
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin); // File get string | Size of function to calculate the size of the input.

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}