//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[100], n, pos, value, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}