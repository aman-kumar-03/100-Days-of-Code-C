/*
Write a program to check if a number is a strong number.
A strong number is a number in which the sum of the factorials of digits = number itself.
Example: 145 = 1! + 4! + 5! = 145
*/

#include <stdio.h>

int main() 
{
    int num, temp, digit, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) 
    {
        digit = temp % 10;   // get last digit

        // find factorial of digit
        fact = 1;
        for (i = 1; i <= digit; i++) 
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is NOT a Strong number.\n", num);

    return 0;
}
