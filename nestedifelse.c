#include <stdio.h>
#include <stdbool.h>

int main()
{

    float price = 10.00;
    bool isStudent = false;
    bool isSenior = true;

    // STUDENT = 9
    // SENIOR = 8
    // STUDENT + SENIOR = 7

    if (isSenior)
    {
        if (isStudent)
        {
            if (isSenior)
            {
                printf("You get a student discount of 10%\n");
                printf("Yout get an extra senior discount of 20%\n");
                price = price * 0.7;
            }

            else
            {
                printf("You get a student discount of 10%\n");
                price = price * 0.9;
            }
        }

        else
        {
            printf("Yout get an extra senior discount of 20%\n");
            price = price * 0.8;
        }
    }

    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}