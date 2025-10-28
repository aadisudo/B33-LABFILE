//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
#include <stdio.h>
int main() {
 
    float celsius, fahrenheit; // We chose float to enter values in decimal
 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); // Taken value of temp. from user


    fahrenheit = (celsius * 9/5) + 32; // Conversion of temp. from farenheit to celcius


    printf("Temperature in Fahrenheit = %.2f`F\n", fahrenheit);


    return 0;
}
 
/*
OUTPUT:-
Enter temperature in Celsius: 45
Temperature in Fahrenheit = 113.00`F
*/
