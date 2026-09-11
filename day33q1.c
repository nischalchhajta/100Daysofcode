//Search in a sorted array using binary search.
#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int target;
	int start = 0;
	int end;
	int middle;
	int found = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	printf("Enter %d sorted elements: ", size);
	for (int index = 0; index < size; index++) {
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to search for: ");
	scanf("%d", &target);

	end = size - 1;
	while (start <= end) {
		middle = (start + end) / 2;

		if (numbers[middle] == target) {
			found = 1;
			printf("Element found at index %d.\n", middle);
			break;
		}

		if (numbers[middle] < target) {
			start = middle + 1;
		} else {
			end = middle - 1;
		}
	}

	if (!found) {
		printf("Element not found.\n");
	}

	return 0;
}