//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] != '\n') 
        {
            printf("%c\n", str[i]);
        }
        i++;
    }
    return 0;
}