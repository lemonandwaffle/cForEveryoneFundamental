/*
Table of Sine Value and Cosine Value (0, 1)
by gitLemonade
21 October 2025
*/

#include <stdio.h>
#include <math.h>

/* Function to print sine and cosine table between 0 and 1 */
void printTrigTable(void)
{
    double x;
    
    printf("   x     |   sin(x)   |   cos(x)\n");
    printf("-------------------------------\n");

    for (x = 0.0; x <= 1.0; x += 0.1)
    {
        printf("  %5.2f  |  %8.4f  |  %8.4f\n", x, sin(x), cos(x));
    }

    printf("-------------------------------\n");
}

//The main function 
int main(void)
{
    printTrigTable(); //execute the printTrigTable() function
    return 0;
}
