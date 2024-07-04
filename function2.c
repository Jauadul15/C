#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float faren(float celsius);

int main() {
    float celsius, fahrenheit;      

    // Prompt the user to enter a Celsius value
    printf("Enter Celsius:\n");
    scanf("%f", &celsius);

    // Call the conversion function
    fahrenheit = faren(celsius);

    // Print the result
    printf("The equivalent of %.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

// Function definition
float faren(float celsius) {
    float fahrenheit;
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    return fahrenheit;
}
