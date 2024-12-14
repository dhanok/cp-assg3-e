/*
 Roll No.:
  Student Name: Afrin Shaikh
  Program Title:WAP FOR Simple interest calculator

  Task Given By:
    - Roll No. of Assignee:29
    - Assignee Name:saleha Shaikh
*/
#include<stdio.h>
int main()
{
    float principal,rate,time,interest;
    printf("Enter principal amount,rate of interest,time(years):");
    scanf("%f %f %f",&principal , &rate , &time);
    interest=(principal*rate*time)/100;
    printf("Simple Interest:%.2f\n",interest);
    return 0;

}