#include <stdio.h>

int main()
{

    int age = 0;

    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult");
    }
    else
    {
        printf("You are not an adult");
    }
    return 0;
}