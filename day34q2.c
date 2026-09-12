//Delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100], n, pos, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deleting the element: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}