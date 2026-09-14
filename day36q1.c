//Read and print a matrix.
#include <stdio.h>
int main(void) {
	int matrix[100][100];
	int rows, columns;

	printf("Enter the number of rows and columns: ");
	if (scanf("%d %d", &rows, &columns) != 2 ||
		rows < 1 || rows > 100 || columns < 1 || columns > 100) {
		printf("Enter row and column counts between 1 and 100.\n");
		return 1;
	}

	printf("Enter the matrix elements:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (scanf("%d", &matrix[i][j]) != 1) {
				printf("Invalid matrix element.\n");
				return 1;
			}
		}
	}

	printf("Matrix:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}