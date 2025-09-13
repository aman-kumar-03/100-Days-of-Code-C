// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a number greater than 0.\n");
    } 
    else 
    {
        for (int i = 1, count = 0; count < n; i += 2, count++) 
        {
            sum += i;
        }
        printf("Sum of first %d odd numbers = %d\n", n, sum);
    }

    return 0;
}
