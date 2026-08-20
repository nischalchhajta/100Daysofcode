/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,Sum,Diff,Product,Quotient;
    printf("Enter two numbers = ");
    scanf("%d,%d",&num1,&num2);
    Sum = num1 + num2;
    Diff = num1 - num2;
    Product = num1*num2;
    Quotient = num1/num2;
    printf("Sum = %d\n"
        "Diff = %d\n"
        "Product = %d\n"
        "Quotient = %d\n",Sum,Diff,Product,Quotient);
    return 0;
}