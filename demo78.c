#include <stdio.h>

int main() {
    int n;
    int sum = 0;

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

    // Efficient single-loop sum for main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
