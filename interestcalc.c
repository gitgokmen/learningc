#include <stdio.h>
#include <math.h>

int main()
{

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompunded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal: ");
    scanf("%lf", &principal);
    printf("Enter the rate: ");
    scanf("%lf", &rate);
    printf("Enter the years of investment: ");
    scanf("%d", &years);
    printf("Enter the times has been compounded: ");
    scanf("%d", &timesCompunded);

    rate = rate / 100;
    double newconst = rate / timesCompunded;

    total = principal * pow(1 + newconst, timesCompunded * years);

    printf("Total is: %.2lf", total);

    return 0;
}