#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("\nCharacters on separate lines:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
