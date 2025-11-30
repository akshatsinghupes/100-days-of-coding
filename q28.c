#include <stdio.h>

int main() {
    int n;
    // Use long long int for product to avoid overflow for larger 'n'
    long long int product = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Iterate from 2 up to n, incrementing by 2 to get even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i; // Multiply the current even number with the product
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0; // Indicate successful execution
}
