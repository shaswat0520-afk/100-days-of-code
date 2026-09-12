#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid size.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Convert 1-based position to 0-based index
    int index = pos - 1;

    // Shift elements left to overwrite deleted element
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease size

    printf("\nArray after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
