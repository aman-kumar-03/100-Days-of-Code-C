// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice, profitLoss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) 
    {
        profitLoss = sellingPrice - costPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit of %.2f (%.2f%%)\n", profitLoss, percentage);
    } 
    else if (sellingPrice < costPrice) 
    {
        profitLoss = costPrice - sellingPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Loss of %.2f (%.2f%%)\n", profitLoss, percentage);
    } 
    else 
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
