#include <stdio.h>

int main() {
    int n1, n2;

    // Input size and elements of the first array
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second array
    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array size is the sum of both array sizes
    int merged[n1 + n2];

    // Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("\nMerged Array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
