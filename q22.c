#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitLossAmount;
    float percentage;

    // Get input from the user
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss amount
    profitLossAmount = sellingPrice - costPrice;

    // Determine if it's a profit, loss, or no change
    if (profitLossAmount > 0) {
        printf("Profit!\n");
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Profit Amount: %.2f\n", profitLossAmount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profitLossAmount < 0) {
        printf("Loss!\n");
        // Convert loss amount to a positive value for percentage calculation
        profitLossAmount = -profitLossAmount; 
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Loss Amount: %.2f\n", profitLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
