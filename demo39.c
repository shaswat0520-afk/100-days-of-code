 #include <stdio.h>

int main() {
    int num, temp, digit;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    // Handle 0 explicitly
    if (temp == 0) {
        printf("No odd digits found in 0.\n");
        return 0;
    }

    while (temp > 0) {
        digit = temp % 10;
        
        // Check if the digit is odd
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        
        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d = %lld\n", num, product);
    } else {
        printf("No odd digits found in %d.\n", num);
    }

    return 0;
}
