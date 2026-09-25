#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; // Covers standard ASCII characters

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("The strings are NOT anagrams.\n");
        return 0;
    }

    // Count frequencies
    for (int i = 0; i < len1; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings ARE anagrams of each other.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}
