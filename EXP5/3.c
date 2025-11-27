/*WAP to read a list of integers and store it in a single dimensional array. Write a
C program to find the frequency of a particular number in a list of integers.*/
#include<stdio.h>
int main()
{
    int n, i , h , add;
    int num[50]; // Array to store up to  max 50 integers

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers\n: ",n); // Integer input from user
    for(i=0;i < n;i++){
        scanf("%d",&num[i]);
    }

    printf("Enter the number to find its frequency\n");
    scanf("%d",&h);//Number whose frequency is to be found

    for (i=0;i<n;i++){ //Checking frequency
        if (num[i] == h)
        add++;
        }

    printf("The number %d is occuring %d times in the list\n", h, add);
        
    return 0;
}
/*
Enter number of elements: 5
Enter 5 integers
: 4 5 7 4 4
Enter the number to find its frequency
4
The number 4 is occuring 3 times in the list
*/