//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include<stdio.h>
int x, y ,z;
int triangle()
{
    printf("Enter the value of the sides of triangle = ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Perimeter of the triangle is = %d \n", x + y + z );
    if (x == y && y == z) //checking if equilateral 
        {
            printf("The triangle is equilateral \n ");
        }
        else if (x == y || y == z || x == z ) //checking if isoceles
        {
            printf("The triangle is isoceles \n");
        }
        else
        {
            printf("The triangle is scalene \n");
        }
}
int area() //function to check area of rectangle
{
    printf("Enter the value of the sides of rectangle = ");
    scanf("%d %d ", &x, &y);
    printf ("area of rectangle = %d", x * y);
}
int main()
{
    triangle();
    area(); //calling functions
    return 0;
}
/*
enter the value of the sides of triangle = 4 8 5
perimeter of the triangle is = 17 
the triangle is scalene
enter the value of the sides of rectangle = 6 7 5
area of rectangle = 42
*/