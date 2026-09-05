#include <stdio.h>

int main() {
    int max_stars = 9;

    // Upper part including the middle row (1 to 9 stars)
    for (int i = 1; i <= max_stars; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part (7 down to 3 stars)
    for (int i = max_stars - 2; i >= 3; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
