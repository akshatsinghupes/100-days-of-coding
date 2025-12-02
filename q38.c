#include <stdio.h>

int main() {
    int n, sum = 0, remainder, original_n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_n = n;

    // Loop continues as long as n is not 0
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        sum += remainder;   // Add the digit to the sum
        n /= 10;            // Remove the last digit
    }

    printf("Sum of digits of %d is %d\n", original_n, sum);

    return 0;
}
