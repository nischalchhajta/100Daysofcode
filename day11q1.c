//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int monthnumber;
    printf("enter month number(1-12)");
    if (scanf("%d", & monthnumber) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (monthnumber) {
        case 1:
            printf("Month: January\nNumber of days: 31\n");
            break;
        case 2:
            printf("Month: February\nNumber of days: 28 or 29 (Leap Year)\n");
            break;
        case 3:
            printf("Month: March\nNumber of days: 31\n");
            break;
        case 4:
            printf("Month: April\nNumber of days: 30\n");
            break;
        case 5:
            printf("Month: May\nNumber of days: 31\n");
            break;
        case 6:
            printf("Month: June\nNumber of days: 30\n");
            break;
        case 7:
            printf("Month: July\nNumber of days: 31\n");
            break;
        case 8:
            printf("Month: August\nNumber of days: 31\n");
            break;
        case 9:
            printf("Month: September\nNumber of days: 30\n");
            break;
        case 10:
            printf("Month: October\nNumber of days: 31\n");
            break;
        case 11:
            printf("Month: November\nNumber of days: 30\n");
            break;
        case 12:
            printf("Month: December\nNumber of days: 31\n");
            break;
        default:
            printf("Invalid month number! Please enter a value between 1 and 12.\n");
            break;
    }

    return 0;
}
