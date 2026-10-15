#include <stdio.h>

int main() {
    float principal, rate, time, si;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (%%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    printf("Simple Interest = Rs. %.2f\n", si);
    printf("Total Amount to Pay = Rs. %.2f\n", principal + si);
    return 0;
}