//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--; 
    } 
    char temp[100];
    for(int i = 0; i < len; i++) 
    {
        temp[i] = tolower(str[i]);
    }
    temp[len] = '\0';
    char rev[100];
    for(int i = len - 1; i >= 0; i--)
    {
        rev[len - i - 1] = temp[i];
    }
    rev[len] = '\0';
    if(strcmp(temp, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    
    return 0;
}