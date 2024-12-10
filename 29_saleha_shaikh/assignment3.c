/* Name : Saleha Shaikh
   UIN: 241S036
   Roll no.- 29
   Division-E
   Task-Wap to swap 2 number using pointers

   Task given by
   Name of the student- Afrin Shaikh
   UIN- 241S015
   Roll no-15
   division -E

*/
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;  // Store the value at x's address in temp
    *x = *y;        // Assign the value at y's address to x
    *y = temp;      // Assign the value stored in temp to y
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function using pointers
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
/*output 



/Enter two numbers: 5678
7895
Before swapping: a = 5678, b = 7895
After swapping: a = 7895, b = 5678

[Process completed - press Enter]
