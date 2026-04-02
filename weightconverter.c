#include <stdio.h>
#include <math.h>

int main()
{

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator.\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Please make a choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the weight: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f KG = %.2f Pounds.", kilograms, pounds);
    }
    else if (choice == 2)
    {
        printf("Enter the weight: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds = %.2f KG.", pounds, kilograms);
    }
    else
    {
        printf("Invalid Number.");
    }

    return 0;
}