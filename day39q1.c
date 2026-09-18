//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int n, i, j;
    int isDistinct = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("The elements on the main diagonal are distinct means true.\n");
    } else {
        printf("The elements on the main diagonal are not distinct means false.\n");
    }

    return 0;
}