#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
