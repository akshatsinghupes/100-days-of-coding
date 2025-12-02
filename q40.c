#include <stdio.h>
#include <math.h> // Required for pow function (or you can manage place values manually)

int main() {
    long long binary_num, complement = 0, temp_num, multiplier = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary_num);

    temp_num = binary_num;

    while (temp_num > 0) {
        digit = temp_num % 10; // Get the last digit (bit)

        // Flip the bit: if it's 0, new digit is 1; if 1, new digit is 0.
        int complemented_digit = 1 - digit;

        // Add the flipped digit back to the complement number in the correct place value
        complement = (complemented_digit * multiplier) + complement;

        temp_num /= 10;
        multiplier *= 10; // Move to the next power of 10
    }

    printf("Original Binary: %lld\n", binary_num);
    printf("1's Complement:  %lld\n", complement);

    return 0;
}
