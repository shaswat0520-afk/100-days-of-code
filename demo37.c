#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // First find HCF using the Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;

    // Calculate LCM using the formula: LCM(a, b) = (a * b) / HCF(a, b)
    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
