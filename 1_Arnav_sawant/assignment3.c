#include <stdio.h>

/*name of the assignee:yash wadhkar
roll no.20
my name:arnav sawant roll no.1

*/
// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply fact by i at each step
    }
    return fact;
}

int main() {
    int num;

    // Ask the user to input a number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d is %lld\n", num, factorial(num));
    }

    return 0;
}