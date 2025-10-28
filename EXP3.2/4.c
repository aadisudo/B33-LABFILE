/*The population of a town is 100000. The population has increased steadily at
the rate of 10% per year for the last 10 years. Write a program to determine
the population at the end of each year in the last decade.*/
#include <stdio.h>

int main() {
    float population = 100000;  // starting population
    float rate = 0.10;          // 10% growth rate
    int year;

    printf("Year\tPopulation\n");
    printf("-------------------\n");

    for (year = 1; year <= 10; year++) {
        population = population + (population * rate);  // increase by 10%
        printf("%2d\t%.0f\n", year, population);        // %.0f rounds to whole number
    }

    return 0;
}
/*
Year    Population
-------------------
 1      110000
 2      121000
 3      133100
 4      146410
 5      161051
 6      177156
 7      194872
 8      214359
 9      235795
10      259374
*/