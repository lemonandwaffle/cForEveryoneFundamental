// #include <stdio.h>

// int string_length(char *s)
// {
//     int counter = 0;

//     //loop while not at the end string
//     while(*s != '\0')
//     {
//         counter++;
//         s++;
//     }

//     return counter;
// }

// int main()
// {
//     printf("String length is %d\n", string_length("Hello"));
//     return 0;
// }


#include <stdio.h>

int string_length(char *s)
{
    char *start = s;

    //loop while not at the end string
    while(*s++ != '\0')
        ;

    return s - start - 1;
}
//The issue is it increment even while it's still null, so that's why we use -1
int main()
{
    printf("String length is %d\n", string_length("Hello"));
    return 0;
}