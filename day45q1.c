//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, count = 0;
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count its frequency: \n");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("Frequency of '%c' in the string is: %d\n", ch, count);
    return 0;
}