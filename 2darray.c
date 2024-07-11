#include <stdio.h>

// Function to display the content of the 2D array
void displayArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements of the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the value for element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the array
    printf("The 2D array is:\n");
    displayArray(rows, cols, arr);

    printf("Press Enter to close the program...");
    getchar();  // Consume the newline character left in the buffer by the last scanf
    getchar();  // Wait for the user to press Enter

    return 0;
}
