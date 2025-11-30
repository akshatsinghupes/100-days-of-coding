#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    // Prompt the user to enter units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on the specified rates
    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        // First 100 units at 5, remaining at 7
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        // First 100 at 5, second 100 at 7, remaining at 10
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
        // First 100 at 5, second 100 at 7, third 100 at 10, remaining at 12
        bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    // Display the total bill
    printf("Total electricity bill for %d units is: ₹%.2f\n", units, bill);

    return 0;
}
