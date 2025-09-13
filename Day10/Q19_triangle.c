// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side lengths!\n");
    } 
    else if (a + b <= c || a + c <= b || b + c <= a) 
    {
        printf("The given sides do not form a valid triangle.\n");
    } 
    else if (a == b && b == c) 
    {
        printf("Equilateral Triangle\n");
    } 
    else if (a == b || b == c || a == c) 
    {
        printf("Isosceles Triangle\n");
    } 
    else 
    {
        printf("Scalene Triangle\n");
    }

    return 0;
}
