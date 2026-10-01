#include <stdio.h>

int findPivotIndex(int nums[], int size) {
    int total_sum = 0;
    int left_sum = 0;

    // Step 1: Calculate total sum of the array
    for (int i = 0; i < size; i++) {
        total_sum += nums[i];
    }

    // Step 2: Iterate to find the leftmost pivot index
    for (int i = 0; i < size; i++) {
        int right_sum = total_sum - left_sum - nums[i];

        if (left_sum == right_sum) {
            return i; // Found leftmost pivot index
        }

        left_sum += nums[i]; // Accumulate left sum for next iteration
    }

    return -1; // No pivot index found
}

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size!\n");
        return 0;
    }

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int pivotIndex = findPivotIndex(nums, n);

    if (pivotIndex != -1) {
        printf("\nPivot Index = %d (Value = %d)\n", pivotIndex, nums[pivotIndex]);
    } else {
        printf("\nPivot Index does not exist (Result: -1)\n");
    }

    return 0;
}
