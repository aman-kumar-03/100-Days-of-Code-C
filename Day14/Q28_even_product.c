// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() 
{
    int n;
    long long product = 1;
    int foundEven = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("No even numbers in the given range.\n");
    } 
    else 
    {
        for (int i = 2; i <= n; i += 2) 
        {
            product *= i;
            foundEven = 1;
        }
        if (foundEven)
            printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
