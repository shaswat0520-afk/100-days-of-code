#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Reading elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculating sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("\nSum of array elements = %d\n", sum);

    return 0;
}
