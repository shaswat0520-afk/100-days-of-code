#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Calculate length manually
    while (str[len] != '\0') {
        len++;
    }

    int start = 0, end = len - 1;

    // Two-pointer swap
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed String: %s\n", str);

    return 0;
}
