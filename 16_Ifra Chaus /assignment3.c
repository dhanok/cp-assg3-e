// Student Name : Ifra Chaus 
// UIN : 241S016
// Roll No : 16

// Assignee Name : Anaya Khan 
// Assignee UIN : 241S004
// Assignee Roll No : 16
// Given Task : WAP to Find LCM of Two Numbers 


// C program to find LCM of two numbers

#include <stdio.h>

// Driver code
int main()
{
    int x = 15, y = 25, max;
    max = (x > y) ? x : y;

    // While loop to check if max variable
    // is divisible by x and y
    while (1) {
        if (max % x == 0 && max % y == 0) {
            printf("The LCM of %d and %d is %d.", x, y,
                   max);
            break;
        }

        ++max;
    }

    return 0;
}