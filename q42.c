#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Find divisors and sum them up
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
