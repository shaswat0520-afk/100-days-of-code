#include <stdio.h>

// Helper function to reverse elements between start and end indices
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

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

    printf("Enter K (number of positions to rotate): ");
    scanf("%d", &k);

    // Normalize k in case k >= n
    k = k % n;
    if (k < 0) {
        k = k + n; // Handle negative rotation inputs
    }

    // Block Reverse Algorithm
    reverse(arr, 0, n - 1); // 1. Reverse whole array
    reverse(arr, 0, k - 1); // 2. Reverse first k elements
    reverse(arr, k, n - 1); // 3. Reverse remaining elements

    printf("\nArray after right rotation by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
