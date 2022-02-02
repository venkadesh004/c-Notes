#include <stdio.h>

int max(int x, int y) {
    return (x>y)?x:y;
}

int min(int x, int y);

void main() {
    int a = 100, b = 200;
    int maximum = max(a, b);
    int minimum = min(a, b);
    printf("Maximum is %d.\n", maximum);
    printf("Minimum is %d.\n", minimum);
}

int min(int x, int y) {
    return (x<y)?x:y;
}