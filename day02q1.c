//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
#include <math.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the value of length and breadth = ");
    scanf("%d,%d",&length,&breadth);
    area = (length*breadth);
    perimeter = 2*(length + breadth);
    printf("The area of rectangle is = %d\n",area);
    printf("The area of rectangle is = %d\n",perimeter);
    return 0;
}