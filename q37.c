#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, min, i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is greater than num2 for simpler iteration (or vice-versa)
    min = (num1 < num2) ? num1 : num2;

    // Calculate GCD using a loop
    for (i = 1; i <= min; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Calculate LCM using the GCD formula
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
