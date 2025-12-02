#include <stdio.h>

long long factorial(int digit) {
    long long fact = 1;
    for (int i = 1; i <= digit; ++i) {
        fact *= i;
    }
    return fact;
}

int is_strong(int num) {
    int original_num = num;
    long long sum = 0;
    int digit;
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original_num && original_num > 0;
}

int main() {
    int number;
    printf("Enter a number to check if it is strong: ");
    scanf("%d", &number);
    if (is_strong(number)) {
        printf("%d is a strong number.\\n", number);
    } else {
        printf("%d is not a strong number.\\n", number);
    }
    return 0;
}
