#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make copy of number to handle negative inputs correctly
    temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
