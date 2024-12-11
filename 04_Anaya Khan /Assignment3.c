// Student Name : Anaya Khan 
// UIN : 241S004
// Roll No: 04

// Assignee Name : Ifra Chaus 
// Assignee UIN : 241S016
// Assignee Roll No : 16
// Given Task : WAP to Swap Two Numbers


// C Program to Swap Two Numbers using a 
// Temporary Variable
#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Swapping values of a and  b
    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}