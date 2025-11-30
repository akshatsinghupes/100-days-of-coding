#include <stdio.h>

void calculate_factorial() {
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long for larger factorials

    printf("Enter an integer to find its factorial: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return;
    }

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
}

// int main() {
//     calculate_factorial();
//     return 0;
// }
