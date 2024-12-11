/*
  Roll No.:- 38
  Student Name:- Shaikh Munaf Sameer
  Program Title: Fibonacci series

  Task Given By:
        - Roll No. of Assignee: 44
        - Assignee Name:Saqlain parkar
*/
#include <stdio.h>

int main() {
    int p, num1,num2,sum;
    num1 = 0;
    num2 = 1;

    printf("Enter number of terms: ");
    scanf("%d", &p);

    printf("fibonacci Series: ");

    if (p >= 1) {
        printf("%d ", num1);
    }
    if (p >= 2) {
        printf("%d ", num2);
    }

    for (int i = 3; i <= p; i++) {
        sum = num1 + num2;
        printf("%d ", sum);
        num1 = num2;
        num2 = sum;
    }
    return 0;
}
/*
  OUTPUT
Enter number of terms: 12
fibonacci Series: 0 1 1 2 3 5 8 13 21 34 55 89
*/