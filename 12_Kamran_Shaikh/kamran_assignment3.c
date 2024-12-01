/*
  Roll No.: 12
  Student Name: Shaikh Kamran Qamaralam
  Program Title: Wap for a menu driven calculator 

  Task Given By:
    - Roll No. of Assignee: 27
    - Assignee Name: Siraj khan
*/
#include <stdio.h>
#include <stdlib.h>

// Define a structure for complex numbers
typedef struct complexNumber {
    int real;
    int img;
} complex;

// Function declarations
void basic_operations(int operation);  // Handles +, -, *, /, %
complex add_complex(complex x, complex y);  // Adds two complex numbers
void matrix_addition();  // Adds two matrices

int main() {
    int choice;
    char continue_choice;

    // Display the menu once at the beginning
    printf("\n\t\t *** Menu Driven Calculator *** \n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Addition of Complex Numbers\n");
    printf("7. Addition of Matrices\n");
    printf("8. Exit\n");

    while (1) {  // Loop for continuously performing operations
        // Prompt user to select an option
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on user choice
        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                basic_operations(choice);  // Call basic operations function
                break;
            case 6: {
                // Complex number addition
                complex a, b, sum;

                // Get the real and imaginary parts of the first complex number
                printf("Enter the real and imaginary parts of the first complex number (e.g., 3 4 for 3 + 4i): ");
                scanf("%d %d", &a.real, &a.img);

                // Get the real and imaginary parts of the second complex number
                printf("Enter the real and imaginary parts of the second complex number (e.g., 5 6 for 5 + 6i): ");
                scanf("%d %d", &b.real, &b.img);

                // Add the two complex numbers
                sum = add_complex(a, b);

                // Display the result
                if (sum.img < 0)
                    printf("Sum = %d - %di\n", sum.real, -sum.img);  // If imaginary part is negative, show minus
                else
                    printf("Sum = %d + %di\n", sum.real, sum.img);  // If positive, show plus
                break;
            }
            case 7:
                matrix_addition();  // Call matrix addition function
                break;
            case 8:
                // Exit the program
                printf("Exiting the calculator. Thank you!\n");
                exit(0);
            default:
                // Handle invalid input
                printf("Invalid choice! Please try again.\n");
        }

        // Prompt to continue or exit after operation
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &continue_choice);  // Space before %c to handle newline

        // If user chooses to continue, the menu won't be printed again
        if (continue_choice == 'n' || continue_choice == 'N') {
            printf("Thank you for using the calculator. Goodbye!\n");
            exit(0);  // Exit the program
        }
    }

    return 0;
}

// Function for basic operations (+, -, *, /, %)
void basic_operations(int operation) {
    float num1, num2, result;
    int mod_result;

    // Prompt user for two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the selected operation
    switch (operation) {
        case 1:  // Addition
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:  // Division
            if (num2 == 0) {  // Check for division by zero
                printf("Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        case 5:  // Modulus
            if ((int)num2 == 0) {  // Check for modulus by zero
                printf("Modulus by zero is not allowed.\n");
            } else {
                mod_result = (int)num1 % (int)num2;
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, mod_result);
            }
            break;
    }
}

// Function for addition of complex numbers
complex add_complex(complex x, complex y) {
    complex sum;
    sum.real = x.real + y.real;  // Add real parts
    sum.img = x.img + y.img;    // Add imaginary parts
    return sum;
}

// Function for addition of matrices
void matrix_addition() {
    int rows, cols;

    // Get matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare matrices
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // Get elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add corresponding elements of the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting sum matrix
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
/*OUTPUT 
// here i am just putting the input of complex no addition and matrix addition since rest of the exmaples are done in lab

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 6
Enter the real and imaginary parts of the first complex number (e.g., 3 4 for 3 + 4i): 2 3 
Enter the real and imaginary parts of the second complex number (e.g., 5 6 for 5 + 6i): 3 3
Sum = 5 + 6i

Do you want to perform another operation? (y/n): y
Enter your choice: 7
Enter the number of rows: 2 
Enter the number of columns: 2
Enter elements of the first matrix:
2 2
3 3
Enter elements of the second matrix:
4 4
5 5
Sum of the matrices:
6 6 
8 8 

Do you want to perform another operation? (y/n): n
Thank you for using the calculator. Goodbye!
*/