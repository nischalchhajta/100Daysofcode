//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Prime numbers from 1 to %d are: ", n);

	for (int number = 2; number <= n; number++) {
		int isPrime = 1;

		for (int divisor = 2; divisor < number; divisor++) {
			if (number % divisor == 0) {
				isPrime = 0;
				break;
			}
		}

		if (isPrime) {
			printf("%d ", number);
		}
	}

	printf("\n");
	return 0;
}