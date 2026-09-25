//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; 
    }
    char rev[100];
    for(int i = len - 1; i >= 0; i--)
    {
        rev[len - i - 1] = str[i];
    }
    rev[len] = '\0';
    printf("Reversed string: \n%s", rev);
    return 0;
}