#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;         // Candidate ceil found
            high = mid - 1;    // Try to find a smaller valid element/earlier index on the left
        } else {
            low = mid + 1;     // Element is smaller than x, move to right half
        }
    }

    return ans;
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size!\n");
        return 0;
    }

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target x: ");
    scanf("%d", &x);

    int ceilIndex = findCeilIndex(arr, n, x);

    if (ceilIndex != -1) {
        printf("\nCeil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);
    } else {
        printf("\nCeil of %d does not exist (Result: -1)\n", x);
    }

    return 0;
}
