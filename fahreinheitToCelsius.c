/*
Fahrenheit to Celsius
by gitLemonade
19 October 2025
*/
#include <stdio.h>

int main(void)
{
    int fahrenheit;
    float celsius;
    printf("Please enter fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8;   //conversion; the operation is done in double
    //convert back to integer

    printf("\n%d fahrenheit is %f celsius\n", fahrenheit, celsius);
}