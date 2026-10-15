#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit = %.2f °F\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius = %.2f °C\n", converted);
    } else {
        printf("Invalid Choice!\n");
    }
    return 0;
}