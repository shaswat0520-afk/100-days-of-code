#include <stdio.h>

// Helper function to reverse a section of a string in-place
void reverseSection(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);

    int start = 0;
    int i = 0;

    while (1) {
        // Word boundary detected
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseSection(sentence, start, i - 1);
            start = i + 1; // Move start index to the character after space

            if (sentence[i] == '\0') {
                break; // End of string
            }
        }
        i++;
    }

    printf("Modified Sentence: %s\n", sentence);

    return 0;
}
