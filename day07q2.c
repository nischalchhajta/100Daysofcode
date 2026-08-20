//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char charachter;
    printf("Enter the charachter = ");
    scanf(" %c",&charachter);
    if (charachter == 'a' || charachter == 'e'|| charachter == 'i' || charachter == 'o' || charachter == 'u')
    {
        printf("The charachter entered is a vowel");
    }
    else {
        printf("The charachter entered is a consonant");
    }
    return 0;
}