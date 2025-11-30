#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter the limit 'n'
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if n is positive
    if (n > 0) {
        printf("Numbers from 1 to %d are:\n", n);

        // Loop from 1 to n and print each number
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); // Print a newline for better formatting
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0; // Indicate successful execution
}
