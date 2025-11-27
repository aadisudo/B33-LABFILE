/*Develop a recursive function GCD (num1, num2) that accepts two integer
arguments. Write a C program that invokes this function to find the greatest
common divisor of two given integers.*/
#include<stdio.h>
int GCD(int num1,int num2) //DECLARED FUNCTION NAMED GCD
{
    int gcd;
    if(num1==0) //ZERO CHECK 
    {
        printf("num 1 is %d", num1);
    }
    else if(num2 == 0) 
    {
        printf("num 2 is %d", num2);
    }
    else{ // CHECK OF GCD
        while(num2 != 0){ //LOOP INITIALIZE
        gcd = num2;
        num2 = num1%num2; //LOGIC = taking num2 as gcd , after dividing num1 by num2 ... num1 becomes gcd
        num1=gcd;
        }
        return gcd; // OUTPUT OF NUM1
    }
}
int main(){ //CALLING OF FUNCTION
    int a , b ,c;
    printf("Enter the number 1 \n",a);
    scanf("%d",&a);

    printf("Enter the number 2 \n",b);
    scanf("%d",&b);

    c = GCD(a,b);//FUNCTION CALLED 
    printf("The GCD is %d",c);
}
/*
Enter the number 1 
48
Enter the number 2 
24
The GCD is 24
*/