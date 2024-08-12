#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 90) {
        grade = 'A'; // Assign character directly, not a string
    } else if (marks >= 80 && marks < 90) {
        grade = 'A';
    } else if (marks >= 70 && marks < 80) {
        grade = 'B';
    } else if (marks >= 60 && marks < 70) {
        grade = 'C';
    } else if (marks >= 50 && marks < 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("YOUR GRADE IS %c\n", grade);

    return 0;
}
