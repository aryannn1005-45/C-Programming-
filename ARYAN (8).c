#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 75) printf("Grade: Distinction (A)\n");
    else if (marks >= 60) printf("Grade: First Class (B)\n");
    else if (marks >= 40) printf("Grade: Pass (C)\n");
    else printf("Grade: Fail\n");

    return 0;
}