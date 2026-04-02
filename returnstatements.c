#include <stdio.h>

double squarenumber(double number)
{
    double new_num = number * number;

    return new_num;
}

int main()
{

    double x = squarenumber(2);
    double y = squarenumber(3);
    double z = squarenumber(4);

    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);

    return 0;
}