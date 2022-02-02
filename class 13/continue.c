#include <stdio.h>

void main() {
    int a = 1;
    do {
        if (a==5) {
            a++;
            continue;
        }
        printf("%d ", a);
        a++;
    } while (a<10);
}