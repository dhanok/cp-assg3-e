/*
  Roll No.:18
  Student Name:Aaditya Waykole
  Program Title:Average of 5 subjects and percentage calculator

  Task Given By:
    - Roll No. of Assignee:19
    - Assignee Name:Soham gonbhare
*/
#include<stdio.h>
int main()
{
        float sub1,sub2,sub3,sub4,sub5;
        float total, aggregate_marks, percentage_marks;

        printf("Enter the marks of Maths: ");
        scanf("%f",&sub1);

        printf("Enter the marks of Physics: ");
        scanf("%f",&sub2);

        printf("Enter the marks of Chemistry: ");
        scanf("%f",&sub3);

        printf("Enter the marks of BEEE: ");
        scanf("%f",&sub4);

        printf("Enter the marks of mechanics: ");
        scanf("%f",&sub5);

        aggregate_marks = (sub1 + sub2 + sub3 + sub4 + sub5);   // formula to calculate aggregate marks
        percentage_marks = (aggregate_marks / 500) * 100;       // formula to calculate percentage marks

        printf("Aggregate marks of 5 subjects are : %.2f\n", aggregate_marks);

        printf("Percentage marks: %.2f\n", percentage_marks);

        return 0;
}
