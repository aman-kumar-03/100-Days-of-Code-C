/*
Write a program to find the sum of array elements.
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
    int sum = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input.\n");
            return 0;
        }
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);
    return 0;
}