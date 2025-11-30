#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");

    // Read the integer input from the user
    scanf("%d", &num);

    // Check if the number is even or odd using the modulus operator
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0; // Indicate successful program execution
}
