// Write a program to check if a number is prime.

#include <stdio.h>

int main() 
{
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("%d is not a Prime number.\n", num);
        return 0;
    }

    for (i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
