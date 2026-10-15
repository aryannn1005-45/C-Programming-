#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    printf("Select operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+': printf("Result = %.2f\n", num1 + num2); break;
        case '-': printf("Result = %.2f\n", num1 - num2); break;
        case '*': printf("Result = %.2f\n", num1 * num2); break;
        case '/': 
            if(num2 != 0) printf("Result = %.2f\n", num1 / num2);
            else printf("Cannot divide by zero!\n");
            break;
        default: printf("Invalid Operator!\n");
    }
    return 0;
}