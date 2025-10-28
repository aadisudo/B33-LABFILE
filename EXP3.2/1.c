//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include <stdio.h>
int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice; //INPUT FROM USER IN YES OR NO


    do {
        printf("Enter a number: ");
        scanf("%d", &num);


        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;


        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // The space before %c — it skips leftover newlines
    } while (choice == 'y' || choice == 'Y');


    printf("\n--- Result ---\n");
    //CHECK FOR RESULTS
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    return 0;
}
/*
OUTPUT:-
Enter a number: 5
Do you want to enter another number? (y/n): Y
Enter a number: 6
Do you want to enter another number? (y/n): n
Positive numbers: 2
Negative numbers: 0
Zeroes: 0
*/
