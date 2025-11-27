/*Create a Book structure containing book_id, title, author name and price.
Write a C program to pass a structure as a function argument and print the
book details.*/
#include<stdio.h>
#include<string.h>
struct BOOK{ //BOOK DETAILS
    int id;
    char title[50];
    char aut[50];
    int price;
};
int main(){ // BOOK DETAIL INPUT FROM USER
    struct BOOK tut;
    printf("Enter the id of the book: \n");
    scanf("%d",&tut.id);

    printf("Enter the title of the book: \n");
    scanf("%s",&tut.title);

    printf("Enter the author name of the book: \n");
    scanf("%s",&tut.aut);

    printf("Enter the price of the book: \n"); //
    scanf("%d",&tut.price);

    printf("\n----THE BOOK DETAILS ARE-----\n");
    printf("ID:-             %d            \n",tut.id);
    printf("TITLE:-          %s            \n",tut.title);
    printf("AUTHOR:-         %s            \n",tut.aut);
    printf("PRICE:-          %d            \n",tut.price);

    return 0;
}
/*
----THE BOOK DETAILS ARE-----
ID:-             231132
TITLE:-          Harry
AUTHOR:-         JK
PRICE:-          590
*/