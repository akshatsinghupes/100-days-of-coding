#include <stdio.h>

void reverse_number() {
    int n, reversed_n = 0, remainder, original_n;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return;
    }
    original_n = n;

    // Loop continues as long as n is not 0
    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10; // Remove the last digit from n
    }

    printf("Original number: %d\n", original_n);
    printf("Reversed number: %d\n", reversed_n);
}

// int main() {
//     reverse_number();
//     return 0;
// }
