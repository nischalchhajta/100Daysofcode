//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int element;
	int position;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 0 || size >= 100) {
		printf("The array size must be between 0 and 99.\n");
		return 1;
	}

	printf("Enter %d sorted elements: ", size);
	for (int index = 0; index < size; index++) {
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to insert: ");
	scanf("%d", &element);

	position = size;
	while (position > 0 && numbers[position - 1] > element) {
		numbers[position] = numbers[position - 1];
		position--;
	}
	numbers[position] = element;
	size++;

	printf("Array after insertion: ");
	for (int index = 0; index < size; index++) {
		printf("%d", numbers[index]);
		if (index < size - 1) {
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
