#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, firstDigit, lastDigit, digits = 0, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Single-digit numbers remain the same
    if (num < 10) {
        if (isNegative) num = -num;
        printf("Swapped number = %d\n", num);
        return 0;
    }

    lastDigit = num % 10;

    // Find the total number of digits and the first digit
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    // Calculate middle part of the number
    int pow10 = (int)pow(10, digits);
    int middlePart = (num % pow10) / 10;

    // Construct swapped number
    swappedNum = (lastDigit * pow10) + (middlePart * 10) + firstDigit;

    if (isNegative) {
        swappedNum = -swappedNum;
    }

    printf("Swapped number = %d\n", swappedNum);

    return 0;
}
