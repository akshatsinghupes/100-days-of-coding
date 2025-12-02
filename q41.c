#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    int n, last_digit, first_digit, digits_count, swapped_num, power_of_10, original_n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_n = n;
    digits_count = 0;

    // Count the number of digits and get the last digit
    last_digit = n % 10;
    
    // Use a loop to count digits
    int temp = n;
    while(temp != 0) {
        temp /= 10;
        digits_count++;
    }

    // Calculate the power of 10 for the first digit's position (e.g., 100 for a 3-digit number)
    power_of_10 = round(pow(10, digits_count - 1));
    
    // Get the first digit
    first_digit = n / power_of_10;

    // 1. Remove the first and last digits from the original number
    //    Example: 1234 -> 230
    swapped_num = n - (first_digit * power_of_10); // Remove first digit
    swapped_num = swapped_num / 10;                // Remove last digit (by shifting right)

    // 2. Add the swapped first and last digits back in their new positions
    //    Example: 230 + (last_digit * 100) + first_digit
    swapped_num = swapped_num * 10;                // Shift back left
    swapped_num = swapped_num + first_digit;       // Add the original first digit to the end
    swapped_num = swapped_num + (last_digit * power_of_10); // Add the original last digit to the front

    printf("Original number: %d\n", original_n);
    printf("Number after swapping first and last digits: %d\n", swapped_num);

    return 0;
}
