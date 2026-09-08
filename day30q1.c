//Count even and odd numbers in an array.
#include <stdio.h>

int main(void)
{
	int n;
	int element;
	int even_count = 0;
	int odd_count = 0;

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

		if (element % 2 == 0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}

	printf("Even numbers: %d\n", even_count);
	printf("Odd numbers: %d\n", odd_count);
	return 0;
}