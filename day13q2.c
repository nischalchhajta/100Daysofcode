/*Q26: Write a program to print numbers from 1 to n.*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int input,i = 1;
    printf("Enter the number : ");
    scanf("%d",&input);
    while (i <= input)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}