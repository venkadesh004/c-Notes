#include <stdio.h>

void main() {
    int a = 1;
    while (a<10) {
        printf("%d ", a);
        a++;
        if (a>5) {
            break;
        }
    }
}