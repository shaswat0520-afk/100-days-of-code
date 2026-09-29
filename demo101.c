#include <stdio.h>

// Function to find the first occurrence using binary search
int findFirst(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; // Keep searching in the left half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence using binary search
int findLast(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; // Keep searching in the right half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("\nFirst Occurrence Index: %d\n", first);
    printf("Last Occurrence Index: %d\n", last);
    printf("Result: [%d, %d]\n", first, last);

    return 0;
}
