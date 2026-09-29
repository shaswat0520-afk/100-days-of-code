#include <stdio.h>

int main() {
    char dateStr[11];
    int day, month, year;

    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%10s", dateStr);

    // Parse day, month, year
    if (sscanf(dateStr, "%d/%d/%d", &day, &month, &year) == 3) {
        if (month >= 1 && month <= 12) {
            printf("Formatted Date: %02d-%s-%04d\n", day, months[month - 1], year);
        } else {
            printf("Invalid month entered!\n");
        }
    } else {
        printf("Invalid date format! Use dd/mm/yyyy.\n");
    }

    return 0;
}
