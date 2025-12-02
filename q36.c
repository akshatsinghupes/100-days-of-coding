#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Prompt the user to enter two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Implement the Euclidean algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2; // Calculate the remainder
        num1 = temp;        // Update num1 with the previous num2
    }

    // After the loop, num1 will hold the GCD
    printf("The HCF (GCD) of the given numbers is: %d\n", num1);

    return 0;
}
