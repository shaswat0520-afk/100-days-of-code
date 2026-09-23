#include <stdio.h>

int main() {
    char str[100];
    int len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a Palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a Palindrome.\n", str);
    }

    return 0;
}
