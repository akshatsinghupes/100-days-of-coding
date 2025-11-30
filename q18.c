#include <stdio.h>

int main() {
    int percentage;

    // Prompt the user to enter the percentage
    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    // Validate the input to ensure it's within the valid range
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input. Please enter a percentage between 0 and 100.\n");
    } else {
        // Assign a grade based on the percentage
        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 80) {
            printf("Grade: B\n");
        } else if (percentage >= 70) {
            printf("Grade: C\n");
        } else if (percentage >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}
