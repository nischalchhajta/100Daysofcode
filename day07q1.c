//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d",&year);
    if (year%400 == 0 && year%100 != 0 || year%4 == 0)
    {
        printf("The year is a leap year");
    }
    else {
        printf("The year is not a leap year");
    }
    return 0;
}
