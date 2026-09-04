/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/
#include <stdio.h>

int main(void)
{
    int groups[] = {1, 2, 5, 3, 1};
    int count = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < groups[i]; j++)
        {
            printf("*\n");
        }

        if (i < count - 1)
        {
            printf("\n");
        }
    }

    return 0;
}