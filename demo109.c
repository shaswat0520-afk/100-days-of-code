#include <stdio.h>

void productExceptSelf(int nums[], int n) {
    int answer[n];

    // Step 1: Left prefix products
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Step 2: Multiply by right suffix products on the fly
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right *= nums[i];
    }

    // Print output
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n");
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    productExceptSelf(nums, n);
    return 0;
}
