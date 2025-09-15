/*
Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() 
{
    int i, j;

    // Growing part: 1, 3, 5 stars
    for (i = 1; i <= 5; i += 2) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*\n");
        }
        printf("\n");  
    }

    // Shrinking part: 3, 1 stars
    for (i = 3; i >= 1; i -= 2) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*\n");
        }
        if (i != 1)    // avoid extra blank line at very end
        {
            printf("\n");
        }
    }

    return 0;
}
