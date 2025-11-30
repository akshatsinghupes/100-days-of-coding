#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    // Convert rate from percentage to decimal for calculations
    rate = rate / 100.0;

    // Calculate Simple Interest
    simple_interest = (principal * rate * time);

    // Calculate Compound Interest
    // Formula: CI = P * ( (1 + r)^t - 1 )
    compound_interest = principal * (pow((1 + rate), time) - 1);

    // Display the results
    printf("\n--- Interest Calculations ---\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Annual Interest Rate: %.2f%%\n", rate * 100);
    printf("Time Period: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
