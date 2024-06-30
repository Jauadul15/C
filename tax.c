#include <stdio.h>

int main() {
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income > 500000 && income <= 1000000) {
        tax = tax + 0.05 * (income - 500000);
    }
    if (income > 1000000 && income <= 2000000) {
        tax = tax + 0.05 * (1000000 - 500000); // Tax for the range 500001 to 1000000
        tax = tax + 0.10 * (income - 1000000);
    }
    if (income > 2000000 && income <= 3000000) {
        tax = tax + 0.05 * (1000000 - 500000); // Tax for the range 500001 to 1000000
        tax = tax + 0.10 * (2000000 - 1000000); // Tax for the range 1000001 to 2000000
        tax = tax + 0.15 * (income - 2000000);
    }
    if (income > 3000000) {
        tax = tax + 0.05 * (1000000 - 500000); // Tax for the range 500001 to 1000000
        tax = tax + 0.10 * (2000000 - 1000000); // Tax for the range 1000001 to 2000000
        tax = tax + 0.15 * (3000000 - 2000000); // Tax for the range 2000001 and above
        tax = tax + 0.20 * (income - 3000000);
    }

    printf("Your tax is %.2f\n", tax);
    return 0;
}
