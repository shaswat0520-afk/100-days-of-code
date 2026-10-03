#include <stdio.h>

int findMajorityElement(int nums[], int size) {
    int candidate = 0;
    int count = 0;

    // Phase 1: Find candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify candidate frequency
    int actual_count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            actual_count++;
        }
    }

    if (actual_count > size / 2) {
        return candidate;
    }

    return -1; // No majority element exists
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

    int majority = findMajorityElement(nums, n);

    if (majority != -1) {
        printf("\nMajority Element = %d\n", majority);
    } else {
        printf("\nNo Majority Element exists (Result: -1)\n");
    }

    return 0;
}
