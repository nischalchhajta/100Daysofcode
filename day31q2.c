//Reverse an array without taking extra space.
#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size <= 0 || size > 100)
	{
		printf("Array size must be between 1 and 100.\n");
		return 1;
	}

	printf("Enter %d elements: ", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);
	}

	for (int left = 0, right = size - 1; left < right; left++, right--)
	{
		int temporary = numbers[left];
		numbers[left] = numbers[right];
		numbers[right] = temporary;
	}

	printf("Reversed array: ");
	for (int index = 0; index < size; index++)
	{
		printf("%d ", numbers[index]);
	}
	printf("\n");

	return 0;
}
 