#include <stdio.h>

void maxSubarraySum(int arr[], int n, int k) {
    if (n < k || k <= 0) return;

    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
}

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    maxSubarraySum(arr, n, k);
    return 0;
}
