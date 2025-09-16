/*
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() 
{
    int i, j;
    int n = 5; 

    // First half (1,3,5,7,9 stars)
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // Second half (7,5,3,1 stars)
    for (i = n - 1; i >= 1; i--) 
    {
        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
