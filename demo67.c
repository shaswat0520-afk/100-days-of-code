#include <stdio.h>

int main() {
    int n, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // Extra space allocated for insertion

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Validate position input
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    // Convert 1-based position to 0-based index
    int index = pos - 1;

    // Shift elements to the right
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert new element
    arr[index] = val;
    n++; // Increase size

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
