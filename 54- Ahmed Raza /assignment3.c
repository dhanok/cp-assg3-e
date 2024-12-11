 /*
 Student Name : Mohammad Ahmed Raza Mohammad Khurshid Alam
        UIN   :241S072
      ROLL NO :54


 Assignee Name :SAYYED AYAAN ZUBAIR
 Assignee Roll No:46
   Task : To write a program to find the sum of prime number between give two numbers
        */

#include <stdio.h>
int prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i = 2;i<num;i++){
            if(num%i==0){
               return 0;
            }
    }
    return 1;
}
int main(){
    int start,end,sum = 0,i ;
        printf("Enter The Start Number: ");
        scanf("%d",&start);
        printf("Enter The End Number: ");
        scanf("%d",&end);
        printf("The Prime Number Between %d And %d Are : \n",start,end);
        for(int i = start;i<=end;i++){
                if(prime(i)){
                   printf("%d\n",i);
                    sum+=i;
                }
        }
        printf("\nThe Sum Of Prime Numbers Between %d And %d is %d \n",start,end,sum);
        return 0;
}
