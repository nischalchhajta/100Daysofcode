//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main()
{
    int m1, n1, m2, n2;
    printf("Enter the size of the first matrix: \n");
    scanf("%d %d", &m1, &n1);
    int arr1[m1][n1];
    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the size of the second matrix: \n");
    scanf("%d %d", &m2, &n2);
    if (n1 != m2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    int arr2[m2][n2];
    printf("Enter the elements of the second matrix: \n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int result[m1][n2];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Resultant Matrix after multiplication is: \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}