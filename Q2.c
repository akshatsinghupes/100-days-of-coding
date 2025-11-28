#include <stdio.h>

int main() {
    float num1, num2;   // using float to handle decimals
    float sum, difference, product, quotient;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Performing calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Checking division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n", difference);
        printf("Product = %.2f\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("\nResults:\n");
        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n", difference);
        printf("Product = %.2f\n", product);
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}
