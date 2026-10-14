#include <stdio.h>

void printKMax(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        printf("%d ", max_val);
    }
    printf("\n");
}

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printKMax(arr, n, k);
    return 0;
}
