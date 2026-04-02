#include <stdio.h>
#include <string.h>
void happybirthday(char name[], int age)
{
    printf("\nHappy birthday!");
    printf("\nHappy birthday!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{

    char name[50] = "";
    int age = 0;

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("How old are you? ");
    scanf("%d", &age);
    happybirthday(name, age);

    return 0;
}