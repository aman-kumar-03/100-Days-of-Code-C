/*
Write a program to read and print elements of a one-dimensional array.
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

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input.\n");
            return 0;
        }
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}