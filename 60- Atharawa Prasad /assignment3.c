/*
 Student Name : Atharawa Prasad Parulekar
        UIN   :241S078
      ROLL NO :60


 Assignee Name :   Shehzad ali shaikh
 Assignee Roll No: 34
   Task : Write a program to to make passcal triangle 
        */

        #include <stdio.h>

int main() {
    int rows;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    int pascal[rows][rows];

  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            
            printf("%d ", pascal[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
