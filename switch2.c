#include <stdio.h>

int main() {
    int marks;
    char *grade;

    // Input marks from user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Determine the grade using switch case
    switch (marks / 10) {
        case 10: // For 100
        case 9:  // For 90-99
        case 8:  // For 80-89
            grade = "A+";
            break;
        case 7:  // For 70-79
            grade = "A";
            break;
        case 6:  // For 60-69
            grade = "A-";
            break;
        case 5:  // For 50-59
            grade = "B";
            break;
        case 4:  // For 40-49
            grade = "C";
            break;
        case 3:  // For 33-39
            grade = "D";
            break;
        default: // For below 33
            grade = "F";
            break;
    }

    // Output the grade
    printf("The Grade is %s\n", grade);

    return 0;
}
