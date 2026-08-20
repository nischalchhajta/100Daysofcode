//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter two numbers = ");
    scanf("%d,%d",&num1,&num2);
    sum = num1 + num2;
    printf("The sum of two numbers is = %d\n",sum);
    return 0;
}