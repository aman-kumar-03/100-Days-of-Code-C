// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() 
{
    int num, first, last, temp, swapped, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;          // get last digit

    while (temp >= 10)         // loop until first digit
    {
        temp /= 10;
        power *= 10;           // count the place value
    }
    first = temp;              // now temp is the first digit

    // remove first and last digits, keep the middle part
    int middle = num % power;  
    middle = middle / 10;

    // rebuild number: last + middle + first
    swapped = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
