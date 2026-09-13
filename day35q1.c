//Find the second largest element in an array.
#include <stdio.h>
int main(void) {
	int arr[100], n;
	int largest = 0, second_largest = 0;
	int has_largest = 0, has_second_largest = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n < 2 || n > 100) {
		printf("Enter between 2 and 100 elements.\n");
		return 1;
	}

	printf("Enter %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		if (!has_largest || arr[i] > largest) {
			if (has_largest) {
				second_largest = largest;
				has_second_largest = 1;
			}
			largest = arr[i];
			has_largest = 1;
		} else if (arr[i] < largest &&
				   (!has_second_largest || arr[i] > second_largest)) {
			second_largest = arr[i];
			has_second_largest = 1;
		}
	}

	if (!has_second_largest) {
		printf("There is no second largest distinct element.\n");
		return 1;
	}

	printf("The second largest element is: %d\n", second_largest);
	return 0;
}