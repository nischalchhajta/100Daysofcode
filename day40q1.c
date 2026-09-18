//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the size of the matrix: \n");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Diagonal Traversal of the matrix is: \n");
    for (int d = 0; d < m + n - 1; d++)
    {
        if (d % 2 == 0)
        {
            for (int i = d < m ? d : m - 1, j = d - i; i >= 0 && j < n; i--, j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int j = d < n ? d : n - 1, i = d - j; j >= 0 && i < m; j--, i++)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
}