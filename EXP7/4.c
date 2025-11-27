/*Create a union containing 6 strings: name, home_address, hostel_address,
city, state and zip. Write a C program to display your present address.*/
#include <stdio.h>

union Address {  //UNION DECLARATION
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() { //PRESENT ADDRESS DETAILS
    union Address addr;

    
    printf("Enter your present address: ");
    fgets(addr.hostel_address, 100, stdin);

    printf("\nYour Present Address:\n");
    printf("%s", addr.hostel_address);

    return 0;
}
/*Enter your present address: home

Your Present Address:
home
*/
