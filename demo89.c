#include <stdio.h>

int main() {
    char str[100];
    char target;
    int count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter a character to count: ");
    scanf(" %c", &target);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", target, count);

    return 0;
}
