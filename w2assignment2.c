/*
Finding the Sine Value (0, 1)
by gitLemonade
20 October 2025
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // Declaration and Initialization
    double inputValue;
    double sineValue;

    // Input Value
    printf("Give me the value between 0 and 1: ");
    scanf("%lf", &inputValue);

    // Logic
    if (inputValue > 0 && inputValue < 1)
    {
        sineValue = sin(inputValue);
        printf("The sine of %.2lf is %.2lf\n", inputValue, sineValue); // we get sin() from <math.h> library
    }
    else
    {
        printf("Error. It is outside the valid range (0, 1)\n");
    }

    return 0;
}
