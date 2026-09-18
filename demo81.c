#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    // Using %99[^\n] to safely read string with spaces including trailing newline handling
    scanf(" %[^\n]", str);

    // Iterate until null terminator '\0' is encountered
    while (str[count] != '\0') {
        count++;
    }

    printf("Length of the string = %d\n", count);

    return 0;
}
