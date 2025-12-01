/*
Write a program to count positive, negative, and zero elements in an array.
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
    int positive = 0, negative = 0, zero = 0;

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input.\n");
            return 0;
        }

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d\n", zero);

    return 0;
}