#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) printf("Status: Underweight\n");
    else if (bmi >= 18.5 && bmi < 24.9) printf("Status: Normal weight\n");
    else if (bmi >= 25 && bmi < 29.9) printf("Status: Overweight\n");
    else printf("Status: Obesity\n");

    return 0;
}