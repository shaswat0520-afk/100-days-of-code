#include <stdio.h>

int main() {
    char binary[65];
    int i = 0, isValid = 1;

    printf("Enter a binary number: ");
    scanf("%64s", binary);

    // Validate and calculate 1's complement in-place
    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            isValid = 0;
            break;
        }
        i++;
    }

    if (isValid) {
        printf("1's Complement: %s\n", binary);
    } else {
        printf("Error: Input is not a valid binary number.\n");
    }

    return 0;
}
