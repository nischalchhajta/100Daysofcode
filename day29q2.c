//Find the maximum and minimum element in an array.
#include <stdio.h>

int main(void)
{
	int n;
	int element;
	int maximum;
	int minimum;

	printf("enter n: ");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Array must contain at least one element.\n");
		return 1;
	}

	scanf("%d", &element);
	maximum = element;
	minimum = element;

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &element);

		if (element > maximum)
		{
			maximum = element;
		}

		if (element < minimum)
		{
			minimum = element;
		}
	}

	printf("Maximum: %d\n", maximum);
	printf("Minimum: %d\n", minimum);
	return 0;
}