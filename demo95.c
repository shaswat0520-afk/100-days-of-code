#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter string 1: ");
    scanf(" %[^\n]", str1);

    printf("Enter string 2: ");
    scanf(" %[^\n]", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Step 1: Check if lengths match
    if (len1 != len2) {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
        return 0;
    }

    // Step 2: Concatenate str1 with str1 into temp
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 3: Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        printf("\"%s\" IS a valid rotation of \"%s\".\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
    }

    return 0;
}
