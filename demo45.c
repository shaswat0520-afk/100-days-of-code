#include <stdio.h>

int main() {
    int n, k;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    for (k = 1; k <= n; k++) {
        double numerator = 2.0 * k;
        double denominator = 4.0 * k - 1.0;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
