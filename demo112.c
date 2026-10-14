#include <stdio.h>

void printFirstNegative(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int first_neg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                break;
            }
        }
        printf("%d ", first_neg);
    }
    printf("\n");
}

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printFirstNegative(arr, n, k);
    return 0;
}
