#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Condition 1: Must be a square matrix
    if (rows != cols) {
        printf("\nMatrix is NOT symmetric (it is not a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1; // Flag assuming matrix is symmetric

    // Condition 2: Check if A[i][j] == A[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) { // Loop only over upper triangular portion
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix IS symmetric.\n");
    } else {
        printf("\nThe matrix is NOT symmetric.\n");
    }

    return 0;
}
