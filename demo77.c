#include <stdio.h>

int main() {
    int n;

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

    int isDistinct = 1; // Flag assuming distinct elements

    // Check distinctness among main diagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("\nAll elements on the main diagonal are DISTINCT.\n");
    } else {
        printf("\nThe main diagonal contains DUPLICATE elements.\n");
    }

    return 0;
}
