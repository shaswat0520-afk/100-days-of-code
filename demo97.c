#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter a full name: ");
    scanf(" %[^\n]", name);

    printf("Initials: ");

    // Print first character if it's not a space
    if (name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }

    // Print character immediately following any space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n");

    return 0;
}
