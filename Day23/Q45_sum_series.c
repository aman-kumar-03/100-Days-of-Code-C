// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input\n");
        return 0;
    }

    float sum = 0.0f;

    int numerator = 2;
    int denominator = 3;

    for (int i = 1; i <= n; i++) 
    {
        sum += (float)numerator / denominator;

        numerator += 2;      
        denominator += 4;     
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
