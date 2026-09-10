#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num, temp;
    int frequency[10] = {0}; // Index 0 to 9 to store counts of each digit

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers by converting to positive
    temp = llabs(num);

    // Edge case for input '0'
    if (temp == 0) {
        frequency[0]++;
    }

    // Extract digits and increment frequency
    while (temp > 0) {
        int digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum frequency
    int max_freq = 0;
    int max_digit = 0;

    for (int i = 0; i < 10; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            max_digit = i;
        }
    }

    printf("\nThe digit that occurs the most is: %d\n", max_digit);
    printf("It appears %d time(s).\n", max_freq);

    return 0;
}
