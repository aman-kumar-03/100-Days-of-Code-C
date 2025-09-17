/*
Write a program to print the pattern:
*

***

*****
*******
***

*
*/

#include <stdio.h>

int main() 
{
    int j;

    // First line (*)
    printf("*\n\n");

    // Second line (***)
    for (j = 1; j <= 3; j++) 
    {
        printf("*");
    }
    printf("\n\n");

    // Third line (*****)
    for (j = 1; j <= 5; j++) 
    {
        printf("*");
    }
    printf("\n");

    // Fourth line (*******)
    for (j = 1; j <= 7; j++) 
    {
        printf("*");
    }
    printf("\n");

    // Fifth line (***)
    for (j = 1; j <= 3; j++) 
    {
        printf("*");
    }
    printf("\n\n");

    // Sixth line (*)
    printf("*\n");

    return 0;
}
