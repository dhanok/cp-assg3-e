/*
  Roll No.:56
  Student Name:Arman Shaikh
  Program Title:Write a program to make a calculator using switch and goto. 
  Task Given By:
    - Roll No. of Assignee:51
    - Assignee Name:Owais Khan
*/

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}