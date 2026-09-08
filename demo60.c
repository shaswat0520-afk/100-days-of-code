#include <stdio.h>

int main() {
    int n, positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 0;
    }

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("\nTotal Positive elements = %d\n", positive_count);
    printf("Total Negative elements = %d\n", negative_count);
    printf("Total Zero elements     = %d\n", zero_count);

    return 0;
}
