/*WAP to read a list of integers and store it in a single dimensional array. Write a
C program to print the second largest integer in a list of integers*/
#include <stdio.h>

int main() {
    int n, i;
    int num[50]; // Array to store up to  max 50 integers
    int largest, secondLargest;

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n); //taking number of elements to be searched within

    // Read the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]); // elements which are to be taken 
    }

    // Initialize largest and secondLargest
    if (num[0] > num[1]) {//if the first element of array is greater than the second one then,
        largest = num[0];//taking the first number to be largest 
        secondLargest = num[1];//and the second to be second largest
    } else {
        largest = num[1];
        secondLargest = num[0];
    }

    // Find largest and second largest
    for (i = 1; i < n; i++) {
        if (num[i] > largest) {
            secondLargest = largest;    // previous largest becomes second largest
            largest = num[i];           // update largest
        } else if (num[i] > secondLargest && num[i] != largest) {
            secondLargest = num[i];     // update second largest
        }
    }
    

    printf("Second largest number = %d\n", secondLargest);

    return 0;
}
/*
Enter number of elements: 
4
Enter 4 integers:
5 6 7 1
Second largest number = 6
*/
