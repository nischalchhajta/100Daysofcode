//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main(void)
{
	int n;
	int element;
	int positive_count = 0;
	int negative_count = 0;
	int zero_count = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Array must contain at least one element.\n");
		return 1;
	}

	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &element);

		if (element > 0)
		{
			positive_count++;
		}
		else if (element < 0)
		{
			negative_count++;
		}
		else
		{
			zero_count++;
		}
	}

	printf("Positive numbers: %d\n", positive_count);
	printf("Negative numbers: %d\n", negative_count);
	printf("Zeros: %d\n", zero_count);
	return 0;
}