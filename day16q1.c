//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); 
    }
    printf("%d", n % 2);    
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary Representation: ");
    
    if (number < 0) {
        printf("-");
        number = -number; 
    }

    printBinary(number);
    printf("\n");

    return 0;
}