#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Prompt the user to input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours
    hours = totalSeconds / 3600;

    // Calculate remaining minutes
    minutes = (totalSeconds % 3600) / 60;

    // Calculate remaining seconds
    seconds = totalSeconds % 60;

    // Display the result in H:M:S format
    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
