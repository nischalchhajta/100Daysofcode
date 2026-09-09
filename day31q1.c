#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int target;
	int found_index = -1;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	printf("Enter %d elements: ", size);
	for (int index = 0; index < size; index++) {
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to search for: ");
	scanf("%d", &target);

	for (int index = 0; index < size; index++) {
		if (numbers[index] == target) {
			found_index = index;
			break;
		}
	}

	if (found_index == -1) {
		printf("Element not found.\n");
	} else {
		printf("Element found at index %d.\n", found_index);
	}

	return 0;
}