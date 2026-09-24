#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for 'a' through 'z'
    char firstRepeating = '\0';

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;

            // First time a frequency reaches 2, we found our answer
            if (freq[index] == 2) {
                firstRepeating = str[i];
                break;
            }
        }
    }

    if (firstRepeating != '\0') {
        printf("First repeating lowercase alphabet: '%c'\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
