//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    // Check if it's a valid triangle first (optional but good practice)
    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Not a valid triangle\n");
        return 0;
    }
    
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    
    return 0;
}
