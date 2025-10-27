//Write a program that prompts the user to enter their name and age. 
#include <stdio.h>
//Header File
int main() {
 
    char name[50]; // Used to store in character format
    int age; // used to store number


    printf("What's your name:");
    scanf("%49s",&name); //use of %49s is to tell the compiler to stop at 49 characters


    printf("What's your age:");
    scanf("%d",&age);


    printf("Name:%s\n",name);  //%s to print char value
    printf("Age:%d\n",age); //%d to print int value


    return 0;
    }


/*
OUTPUT:-
What's your name:aaditya
What's your age:50
Name:aaditya
Age:50
*/
