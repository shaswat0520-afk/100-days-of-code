#include <stdio.h>

int main() {
    int n, temp, binary[32], i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("Binary representation of %d: ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
