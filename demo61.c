#include <stdio.h>

int main() {
    int n, key, found = 0, index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Perform Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break; // Element found, exit loop
        }
    }

    // Output result
    if (found) {
        printf("Element %d found at position %d (index %d).\n", key, index + 1, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
