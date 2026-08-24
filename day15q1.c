/*Q29: Write a program to calculate the factorial of a number.*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main()
{
    int input,i=1,factorial=1;
    printf("Enter the number : ");
    scanf("%d",&input);
    while(i<=input)
    {
        factorial = factorial*i;
        i++;
    }
    printf("The factorial of the number is : %d\n",factorial);
    return 0;
}