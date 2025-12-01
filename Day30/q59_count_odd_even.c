/*
Write a program to count even and odd numbers in an array.
*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) 
    {
        printf("Invalid input.\n");
        return 0;
    }

    int arr[100];
    int even = 0, odd = 0;

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input.\n");
            return 0;
        }

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}