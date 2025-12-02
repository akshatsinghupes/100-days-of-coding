#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n > 0) {
        sum += 1.0; // First term
        for (int i = 1; i < n; ++i) {
            double num = (double)(2 * i + 1);
            double den = (double)(2 * i + 2);
            sum += num / den;
        }
    }
    printf("Sum of the series up to %d terms is: %lf\\n", n, sum);
    return 0;
}
