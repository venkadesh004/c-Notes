#include <stdio.h>

void main() {
    int a = 0;
    int b = 20;
    if (a && b) {
        printf("a and b are true\n");
    } else {
        printf("a and b are false \n");
    }
    if (a || b) {
        printf("a or b is true \n");
    }
}