#include <stdio.h>

int main() {
    int n; // Stores the number of odd terms
    int sum = 0; // Stores the sum of odd numbers
    int i; // Loop counter

    // Prompt the user for input
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    // The k-th odd number is given by 2*k - 1
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    // Print the result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
