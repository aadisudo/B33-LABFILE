/*WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. 
You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).*/
#include<stdio.h> // HEADER FILE
int main(){


    float weight,height; // Taken float to store value in decimal
    printf("Enter your height in cms:");
    scanf("%f",&height);//input of height from user


    printf("Enter your weight in kgs:");
    scanf("%f",&weight);//input of weight from user


    if(weight>0 && height>0){ // negative and zero check
     printf("values are valid\n");
    }
    else{
        printf("Values are invalid\n");
        return 0;
    }
    height = height/100; //conversion of height to cms
    float BMI=weight / (height * height); // Calculation of BMI
    printf("Your BMI is : %.2f\n",BMI);
   
    if(BMI>=40.0){
        printf("You are morbidity obese");
    }
    else if (BMI<=39.9 && BMI>=30.0){
        printf("You are obese");
    }
    else if(BMI<=29.9 && BMI>=25.0){
        printf("You are overweight");
    }
    else if(BMI<=24.9 && BMI>=18.6){
        printf("You are ideal");
         }
    else if(BMI<=18.5 && BMI>=17.6){
        printf("You are underweight");
    }
    else if(BMI<=17.5 && BMI>=15.1){
        printf("You are anorexic");
    }else{
        printf("You are at starvation");
    }
   
    return 0;


}
/*
OUTPUT:-
Enter your height in cms:177
Enter your weight in kgs:67
values are valid
Your BMI is : 21.39
You are ideal*/
