#include <stdio.h>
#include <math.h> // Required for pow function

void decimal_to_binary() {
    long long decimal_num, binary_num = 0;
    int remainder, i = 1;

    printf("Enter a decimal number: ");
    if (scanf("%lld", &decimal_num) != 1) {
        printf("Invalid input.\n");
        return;
    }

    long long temp = decimal_num; // Store original for printing

    // Handle the edge case of 0 separately
    if (decimal_num == 0) {
        printf("Binary representation of 0 is 0\n");
        return;
    }

    while (decimal_num != 0) {
        remainder = decimal_num % 2; // Get the remainder (binary digit)
        binary_num = binary_num + remainder * i; // Add the digit to the binary number
        decimal_num /= 2; // Divide by 2 for the next iteration
        i *= 10; // Increase place value (1s, 10s, 100s in decimal representation of binary)
    }

    printf("Binary representation of %lld is %lld\n", temp, binary_num);
}

// int main() {
//     decimal_to_binary();
//     return 0;
// }
