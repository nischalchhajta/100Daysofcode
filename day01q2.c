//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
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