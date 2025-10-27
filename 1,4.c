//Write a C program to add two numbers, take number from user.
#include <stdio.h>
 int main(){
   
   int a , b; //Taken two variable a and b
   
    printf("Enter the value of a:");
    scanf("%d",&a);


    printf("Enter the value of b:");
    scanf("%d",&b);


    int sum = a + b; // described a new variable (sum), which does addition of two numbers
   
    printf("sum=%d",sum);
   
    return 0;
 }


 /*
 OUTPUT:-
 Enter the value of a:56
 Enter the value of b:45
 sum=101
 */
