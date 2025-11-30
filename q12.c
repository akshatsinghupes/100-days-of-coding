#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    
    // Read the integer from the user
    scanf("%d", &number);

    // Outer if-else: Check if the number is non-negative (greater than or equal to zero)
    if (number >= 0) {
        // Nested if-else: If non-negative, check if it's exactly zero
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            // If non-negative and not zero, it must be positive
            printf("%d is a positive number.\n", number);
        }
    } else {
        // If not non-negative, it must be negative
        printf("%d is a negative number.\n", number);
    }

    return 0;
}
