//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
int main()
{
    float area, circumference, radius;
    printf("Enter the radius of circle = ");
    scanf("%f", &radius);
    area = 3.14 * pow(radius, 2);
    circumference = 2 * 3.14 * radius;
    printf("The area of the circle is = %.2f\n"
           "The circumference of the circle is = %.2f\n",
           area, circumference);
    return 0;
}