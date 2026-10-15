#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    char branch[30];
};

int main() {
    struct Student s1;

    // Accept student details
    printf("Enter student name: ");
    scanf(" %[^\n]", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.rollno);

    printf("Enter branch: ");
    scanf(" %[^\n]", s1.branch);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollno);
    printf("Branch     : %s\n", s1.branch);

    return 0;
}