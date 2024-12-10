/*
  Roll No.:63
  Student Name:ShaiRehan dildar 
  Program Title:wap for  Find Factorial of a Number

  Task Given By:
    - Roll No. of Assignee:61
    - Assignee Name:khan maaz yasin
*/
#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("Factorial of %d is %lld.\n", number, factorial(number));
    }

    return 0;
}