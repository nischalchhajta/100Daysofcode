Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    if (d >= 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 is %f\n", root1);
        printf("root2 is %f\n", root2);
    } else {
        printf("roots are imaginary\n");
    }

    return 0;
}
