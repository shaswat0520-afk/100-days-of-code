#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Simple Bubble Sort to sort the array in ascending order
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int findKthSmallest(int arr[], int n, int k) {
    // Sort the array first
    sortArray(arr, n);
    
    // The kth smallest element is at index k - 1
    return arr[k - 1];
}

int main() {
    int n, k;
    
    // Read array size and k
    if (scanf("%d %d", &n, &k) != 2 || k <= 0 || k > n) {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findKthSmallest(arr, n, k);
    printf("%d\n", result);

    return 0;
}
