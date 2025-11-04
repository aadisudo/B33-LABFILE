/*Declare variables within different code blocks (enclosed by curly braces) and
test their accessibility within and outside those blocks.*/
#include <stdio.h>

int main() {
    int a = 10;  // Declared in main block
    printf("Main block: a = %d\n", a);

    {
        int b = 20;  // Declared in inner block
        printf("Inner block: a = %d, b = %d\n", a, b);
        a = a + 5;   // Modifying 'a' inside the inner block
        printf("Modified 'a' inside inner block: %d\n", a);
    }

    // printf("Outside inner block: %d\n", b); // ERROR B IS NOT ACCESSIBLE
     printf("Outside inner block: a = %d\n", a);

    {
        int c = 30;
        printf("Inside second block: a = %d, c = %d\n", a, c);
    }

    // printf("Outside second block: %d\n", c); // ERROR C IS NOT ACCESSIBLE

    return 0;
}
/*
Main block: a = 10
Inner block: a = 10, b = 20
Modified 'a' inside inner block: 15
Outside inner block: a = 15
Inside second block: a = 15, c = 30
*/