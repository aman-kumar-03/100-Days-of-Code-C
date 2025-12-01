/*
Write a program to find the maximum and minimum element in an array.
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

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}