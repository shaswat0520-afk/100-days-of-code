#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions!\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal (Anti-diagonal Order):\n");
    // 's' represents the sum of row index and column index (i + j)
    for (int s = 0; s <= rows + cols - 2; s++) {
        int i = (s < cols) ? 0 : s - cols + 1;
        while (i < rows && (s - i) >= 0) {
            int j = s - i;
            printf("%d ", matrix[i][j]);
            i++;
        }
        printf("\n"); // Newline after each diagonal
    }

    return 0;
}
