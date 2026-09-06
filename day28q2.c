//Read and print elements of a one-dimensional array.
#include <stdio.h>

int main(void) {
	int elements[100];
	int count;
	int index;

	printf("Enter the number of elements (1-100): ");
	scanf("%d", &count);

	if (count < 1 || count > 100) {
		printf("Invalid number of elements.\n");
		return 1;
	}

	printf("Enter %d elements: ", count);
	for (index = 0; index < count; index++) {
		scanf("%d", &elements[index]);
	}

	printf("Array elements: ");
	for (index = 0; index < count; index++) {
		printf("%d ", elements[index]);
	}
	printf("\n");

	return 0;
}