#include <stdio.h>

// Helper function to calculate the factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    originalNum = num;
    int temp = num;

    // Extract digits, find their factorials, and add to sum
    while (temp > 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    // Check if the sum of factorials equals the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
