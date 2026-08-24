#include <stdio.h>

int main() {
    float units, bill = 0.0;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 0) {
        printf("No bill generated or invalid input.\n");
    } 
    else if (units <= 100) {
        bill = units * 5.0;
        printf("Total Bill: ₹%.2f\n", bill);
    } 
    else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
        printf("Total Bill: ₹%.2f\n", bill);
    } 
    else if (units <= 300) {
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
        printf("Total Bill: ₹%.2f\n", bill);
    } 
    else {
        bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
        printf("Total Bill: ₹%.2f\n", bill);
    }

    return 0;
}
