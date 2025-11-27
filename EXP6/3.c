/*Develop a recursive function FIBO (num) that accepts an integer argument.
Write a C program that invokes this function to generate the Fibonacci
sequence up to num.*/
#include<stdio.h>
int fibo(int i){

    if( i<= 1)
        return i ; 

        return fibo(i-1) + fibo(i-2); // FIBONNACI SERIES LOGIC
    
}

int main(){
    int num;
    printf("Enter value of num \n");
    scanf("%d",&num); //INPUT OF NUM
    
    for (int i=0; i < num ; i++){
        printf("%d", fibo(i));
    }
    return 0;
}
/*
Enter value of num 
7
0112358
*/