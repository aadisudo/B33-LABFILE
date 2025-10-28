//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>


int main() {


    int length, breadth;//We described length and breadth as variable
   
    printf("The value of length is:");
    scanf("%d", &length);//Input of length from user


    printf("The value of breadth is:");
    scanf("%d", &breadth);//Input of breadth from user


    int Area=length*breadth;//described area and does operations from the values given by user
    printf("Area of rectangle is:%d\n",Area);


    int perimeter=4*(length+breadth);//described perimeter and does operations from the values given by user
    printf("perimeter of rectangle is:%d\n",perimeter);


    return 0;
}


/*
OUTPUT:-
The value of length is:4
The value of breadth is:5
Area of rectangle is:20
perimeter of rectangle is:36
*/
