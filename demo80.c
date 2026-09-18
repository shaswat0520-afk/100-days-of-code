#include <stdio.h>

int main() {
    int n;
    int total_sum = 0;

    printf("Enter dimension N for square matrix (N x N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid dimension!\n");
        return 0;
    }

    int matrix[n][n];

    printf("Enter elements of the (%d x %d) matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Traverse both diagonals simultaneously in O(N) time
    for (int i = 0; i < n; i++) {
        total_sum += matrix[i][i];                  // Add primary diagonal element
        total_sum += matrix[i][n - 1 - i];          // Add secondary diagonal element
    }

    // If N is odd, subtract the double-counted center element
    if (n % 2 != 0) {
        total_sum -= matrix[n / 2][n / 2];
    }

    printf("\nSum of both primary and secondary diagonals = %d\n", total_sum);

    return 0;
}
