#include <stdio.h>

int main() {
    int rows;

    // Input: Number of rows for Pascal's Triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Initialize the triangle
    int pascal[rows][rows];

    // Generate Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            // Set the first and last values in a row to 1
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                // Compute value using the sum of two values above it
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            // Print the value
            printf("%d ", pascal[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
