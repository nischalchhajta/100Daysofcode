//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    int v=0, c=0, i=0;
    while(str[i] != '\0')
    {
        char temp = str[i];
        i++;
        if(isdigit(temp) || isspace(temp) || ispunct(temp))
        continue;
        else if(temp=='a' || temp=='A' || temp=='e' || temp=='E' || temp=='i' || temp=='I' || temp=='o' || temp=='O' || temp=='u' || temp=='U' )
        v++;
        else
        c++;
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}