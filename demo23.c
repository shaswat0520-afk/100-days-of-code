#include <stdio.h>

int main() {
    int days;
    float fine = 0.0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time.\n");
    } 
    else if (days <= 5) {
        fine = days * 2.0;
        printf("Fine Amount: ₹%.2f\n", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2.0) + ((days - 5) * 4.0);
        printf("Fine Amount: ₹%.2f\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((days - 10) * 6.0);
        printf("Fine Amount: ₹%.2f\n", fine);
    } 
    else {
        printf("Membership Cancelled! Returned more than 30 days late.\n");
    }

    return 0;
}
