/*Develop a recursive and non-recursive function FACT(num) to find the
factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n)
= n * FACT(n-1). Using this function, write a C program to compute the
binomial coefficient. Tabulate the results for different values of n and r with
suitable messages.*/
#include<stdio.h>
int fact(int n){ // Using a function int with name fac and a parameter of func "int n"
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1); //Eg: taking 3 and we get two output one is 2 and other one is 1 
    }
    int main(){//Calling the recursive function 
        int val;
        val = fact(5); 
        printf("%d",val);
}
//OUTPUT:- 120