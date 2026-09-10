//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};   // count digits 0 to 9
    int maxCount = 0;
    int mostFrequentDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;   // handle negative numbers
    }

    if (n == 0) {
        printf("Most frequent digit: 0\n");
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", mostFrequentDigit);

    return 0;
}