// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to ignore whitespace

    ch = tolower(ch);  // convert to lowercase for easy comparison

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a Vowel\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z'))
    {
        printf("%c is a Consonant\n", ch);
    }
    else
    {
        printf("%c is not an alphabet character\n", ch);
    }

    return 0;
}
