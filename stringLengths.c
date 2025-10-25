#include <stdio.h>

int string_length(char s[])
{
    int counter = 0;
    int index = 0;

    //loop while not at the end string
    while(s[index] != '\0')
    {
        //add to counter
        counter++;
        index++;
    }

    //return counter
    return counter;
}

int main()
{
    printf("String length is %d\n", string_length("Hello"));
    return 0;
}