#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        char ch = str[i];
        
        // Check if character is NOT a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("String after removing vowels: %s\n", str);

    return 0;
}
