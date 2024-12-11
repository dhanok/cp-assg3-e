/*
  Roll No.:17 
  Student Name:Mansingh Chauhan 
  Program Title:Program to find area of quarter circle
  

  Task Given By:
    - Roll No. of Assignee: 11
    - Assignee Name:Divyansh Pal
*/

// Find area of Quarter Circle//

#include<stdio.h>

int main(){
     float radius;
     float a;
     float area;

     printf("Enter the are of quarter circle : ");
     scanf("%f",&radius);

     //logic
     a = 3.14*radius*radius;
     area = a/4;
     printf("The area is %f",area);
     printf("\n\n");
