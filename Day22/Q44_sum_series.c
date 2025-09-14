// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

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

    // First term is 1
    if (n >= 1) sum += 1.0f;

    // For term index i = 2..n: numerator = 2*i - 1, denominator = 2*i
    for (int i = 2; i <= n; i++) 
    {
        float numerator = 2.0f * i - 1.0f;   // e.g., i=2 -> 3
        float denominator = 2.0f * i;        // e.g., i=2 -> 4
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
