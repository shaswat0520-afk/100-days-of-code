#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    // Total sum from 1 to n using long long to avoid potential overflow
    long long total_sum = (long long)n * (n + 1) / 2;

    // Take integer square root of total_sum
    long long x = (long long)sqrt(total_sum);

    // Check if x * x equals total_sum (i.e., total_sum is a perfect square)
    if (x * x == total_sum) {
        return (int)x;
    }

    return -1;
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 0;
    }

    int pivot = findPivotInteger(n);

    if (pivot != -1) {
        printf("\nPivot Integer x = %d\n", pivot);
    } else {
        printf("\nPivot Integer does not exist (Result: -1)\n");
    }

    return 0;
}
