#include <stdio.h>

int main() {
    int n, product = 1, digit, original_n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_n = n;

    while (n != 0) {
        digit = n % 10; // Get the last digit

        if (digit % 2 != 0) {
            product *= digit; // Multiply if the digit is odd
        }

        n /= 10; // Remove the last digit
    }

    // Special case handling if no odd digits were found, the result is 1 (the initial product)
    printf("Product of odd digits of %d is %d\n", original_n, product);

    return 0;
}
