#include <stdio.h>

void findPreviousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;
        
        // Look for the nearest greater element on the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Found the nearest one on the left
            }
        }
        
        // Print with comma separation
        if (i == n - 1) {
            printf("%d", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findPreviousGreater(arr, n);

    return 0;
}
