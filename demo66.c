#include <stdio.h>

int main() {
    int n, key;

    printf("Enter current number of elements: ");
    scanf("%d", &n);

    // Array dimensioned with extra space for insertion
    int arr[100];

    printf("Enter %d elements in SORTED order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    int i = n - 1;

    // Shift elements greater than key to the right
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert key at the correct position
    arr[i + 1] = key;
    n++; // Increase array size count

    printf("\nArray after insertion:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
