/*Declare different types of pointers (int, float, char) and initialize them with the
addresses of variables. Print the values of both the pointers and the variables
they point to.*/
#include<stdio.h>
#include<string.h>
int main(){ 
    int val;
    float num;
    char name[50];

    int *ptr1 = &val;//Ptr1 intialize
            *ptr1 = 200;//Ptr1 value of assign

    float *ptr2 = &num;//Ptr2 intialize 
            *ptr2 = 50.56;//Ptr2 value assign

    char *ptr3 = name;//Ptr3 intialize
            strcpy(ptr3, "aadi");//Ptr input

            printf("val=%d\n",*ptr1);
            printf("num = %.02f\n",*ptr2);
            printf("name=%s\n",ptr3);
    return 0;
}
/*
val=200
num = 50.56
name=aadi
*/