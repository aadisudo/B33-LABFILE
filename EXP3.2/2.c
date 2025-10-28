/*WAP to print the multiplication table of the number entered by the user. It
should be in the correct formatting. Num * 1 = Num*/
#include <stdio.h>

int main() {
    int num, i;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d\n", num);

    // Print table from 1 to 10
    for (i = 1; i <= 10; i++) {//Start from 1 and limiting i to be less than equal to 10 and incrementing in every next step
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
/*
Enter a number: 5

Multiplication Table of 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/