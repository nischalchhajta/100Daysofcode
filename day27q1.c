/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*  */

#include<stdio.h>

int main(void) 
{
    int stars = 1;

    for (int row = 1; row <= 9; row++) 
    {
        // Print the stars for the current row
        for (int column = 1; column <= stars; column++) 
        {
            printf("*");
        }
        printf("\n");

        if (row < 5) {
            stars += 2;
        } else {
            stars -= 2;
        }
    }

    return 0;
}