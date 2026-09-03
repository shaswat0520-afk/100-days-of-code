#include <stdio.h>

int main() {
    // Array storing the number of stars per group: 1, 3, 5, 3, 1
    int star_counts[] = {1, 3, 5, 3, 1};
    int total_groups = 5;

    for (int group = 0; group < total_groups; group++) {
        // Print vertical stars for current group
        for (int i = 0; i < star_counts[group]; i++) {
            printf("*\n");
        }
        
        // Print blank line separator between groups (except after the last group)
        if (group < total_groups - 1) {
            printf("\n");
        }
    }

    return 0;
}
