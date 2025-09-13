// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to handle newline

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d / %d = %d\n", a, b, a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if (b != 0)
                printf("%d %% %d = %d\n", a, b, a % b);
            else
                printf("Error: Modulo by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
