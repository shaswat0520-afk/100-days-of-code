#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int len = strlen(str);
    int count = 0;

    printf("\nAll Substrings of \"%s\":\n", str);

    // Starting index
    for (int i = 0; i < len; i++) {
        // Ending index
        for (int j = i; j < len; j++) {
            // Print characters from start index i to end index j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
            count++;
        }
    }

    printf("\nTotal substrings = %d\n", count);

    return 0;
}
