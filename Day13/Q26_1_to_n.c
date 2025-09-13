// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a number greater than 0.\n");
    } 
    else 
    {
        for (int i = 1; i <= n; i++) 
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
