#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        double num = (double)(2 * i);
        // Denominators: 3, 7, 11, 15... difference of 4. Formula: 4*i - 1
        double den = (double)(4 * i - 1);
        sum += num / den;
    }

    printf("Sum of the series up to %d terms is: %lf\\n", n, sum);
    return 0;
}
