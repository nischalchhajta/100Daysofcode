
//Find the sum of array elements.
#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
printf("enter n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int element;
		scanf("%d", &element);
		sum += element;
	}

	printf("%d\n", sum);
	return 0;
}