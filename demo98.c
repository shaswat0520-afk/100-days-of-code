#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int last_space_idx = -1;

    printf("Enter a full name: ");
    scanf(" %[^\n]", name);

    // Find index of the last space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            last_space_idx = i;
        }
    }

    printf("Formatted Name: ");

    if (last_space_idx == -1) {
        // No spaces present (single name only)
        printf("%s\n", name);
        return 0;
    }

    // Print initial of the first word
    if (name[0] != ' ') {
        printf("%c. ", toupper(name[0]));
    }

    // Print initials for middle names (before the last space)
    for (int i = 0; i < last_space_idx; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < last_space_idx) {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // Print surname in full (after the last space)
    for (int i = last_space_idx + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

 
   return 0;
}
