#include <stdio.h>

int get(int a) {
    if (a>0) {
        printf("%d ", a);
        return get(a-1);
    } else {
        return a;
    }
}

void main() {
    int a = 10;
    printf("%d ", get(a));
}