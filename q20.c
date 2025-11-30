#include <stdio.h>

int main() {
    int dayNumber;

    // Prompt the user to enter a number
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    
    // Read the integer input from the user
    scanf("%d", &dayNumber);

    // Use a switch-case statement to determine the day
    switch (dayNumber) {
        case 1:
            printf("Day %d is Sunday.\n", dayNumber);
            break;
        case 2:
            printf("Day %d is Monday.\n", dayNumber);
            break;
        case 3:
            printf("Day %d is Tuesday.\n", dayNumber);
            break;
        case 4:
            printf("Day %d is Wednesday.\n", dayNumber);
            break;
        case 5:
            printf("Day %d is Thursday.\n", dayNumber);
            break;
        case 6:
            printf("Day %d is Friday.\n", dayNumber);
            break;
        case 7:
            printf("Day %d is Saturday.\n", dayNumber);
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
