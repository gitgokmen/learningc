#include <stdio.h>

int main()
{

    int age = 25;
    float price = 19.99;
    double pi = 3.141592653;
    char currency = '$';
    char name[] = "Gokmen Budak";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    int x = 2;
    int y = 3;
    int z = 0;
    z = x + y;
    printf("%d\n", z);
    return 0;
}