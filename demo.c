#include <stdio.h>

int main() {
    int a = 10 ;
    int b = 20;
    a = a + b;
    b = a - b; 
    a = a - b;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
