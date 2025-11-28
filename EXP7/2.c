/*Write a C program to compute the monthly pay of 100 employees using each
employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
Gross-salary (basic pay + DA). Print the employees name and gross salary.*/
#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp;
    float da;

    
        printf("\nEnter name of employee ");
        scanf("%s", emp.name);   // FIRST NAME ONLY

        printf("Enter basic pay of %s: ", emp.name);
        scanf("%f", &emp.basic);

        da = 0.52f * emp.basic; //SOME MODIFICATION FROM CHAT GPT HERE
        emp.gross = emp.basic + da;
    

    printf("\n----- Employee Gross Salary -----\n");

        printf("Employee: %s   Gross Salary: %.2f\n",emp.name, emp.gross);
    return 0;
}
/*
Enter name of employee HenrySingh
Enter basic pay of HenrySingh: 50000

----- Employee Gross Salary -----
Employee: HenrySingh        Gross Salary: 76000.00
*/