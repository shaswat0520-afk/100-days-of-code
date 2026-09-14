#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions!\n");
        return 0;
    }

    int matrix[rows][cols];

    // Input elements and compute sum
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
