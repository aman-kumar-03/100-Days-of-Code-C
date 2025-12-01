/*
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 2) 
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    for (int i = 2; i <= n; i++) 
    {
        int isPrime = 1;

        for (int j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}