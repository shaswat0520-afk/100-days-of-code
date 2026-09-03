#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 5; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        // Print numbers from i up to 5
        for (int k = i; k <= 5; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
