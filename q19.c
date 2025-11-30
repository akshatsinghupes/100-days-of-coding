#include <stdio.h>

int main() {
    int num, digit;
    long long product_of_odd_digits = 1; // Use long long to handle potentially large products
    int found_odd_digit = 0; // Flag to check if any odd digit was found

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case of 0 separately, as its only digit is even
    if (num == 0) {
        printf("The number 0 has no odd digits.\n");
        return 0;
    }

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; // Get the last digit

        if (digit % 2 != 0) { // Check if the digit is odd
            product_of_odd_digits *= digit;
            found_odd_digit = 1; // Set flag to true
        }
        num /= 10; // Remove the last digit
    }

    if (found_odd_digit) {
        printf("The product of odd digits is: %lld\n", product_of_odd_digits);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}
