#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Calculate the sum using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i; // Add each natural number to the sum
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}
