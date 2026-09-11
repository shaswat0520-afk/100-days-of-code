#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid size.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements in SORTED order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            index = mid;
            break; // Element found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    if (index != -1) {
        printf("Element %d found at index %d (position %d).\n", key, index, index + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
