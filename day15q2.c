/*Q30: Write a program to reverse a given number.*/

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int number,reversed_number = 0,digit;
    printf("Enter the number : ");
    scanf("%d",&number);
    while (number != 0)
    {
        digit = number%10;
        reversed_number = reversed_number*10 + digit; 
        number = number/10;
    }
    printf("reversed number is : %d\n",reversed_number);
    return 0;
}