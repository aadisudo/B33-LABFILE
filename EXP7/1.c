/*1. Write a C program that uses functions to perform the following operations:
a. Reading a complex number.
b. Writing a complex number.
c. Addition and subtraction of two complex numbers*/
#include<stdio.h>

struct complex {
    float real;
    float imag;

    }; 
int main(){    
    struct complex input ;     //PARTIAL LOGIC FROM CHAT GPT

        printf("Enter the value of num1: ");
        scanf("%f",&input.real);

        printf("Enter the value of num2: ");
        scanf("%f",&input.imag);

        printf("[%.02f][%.02fi]\n",input.real,input.imag);
    
        printf("%.02f + %.02fi\n",input.real,input.imag);

        printf("%.02f - %.02fi\n",input.real,input.imag);

        return 0;
}
//PARTIALLY DONE CODE 
/*Enter the value of num1: 12
Enter the value of num2: 23
[12.00][23.00i]
12.00 + 23.00i
12.00 - 23.00i*/