#include <stdio.h>

int a;
void main() {
    extern int a;
    printf("%d ", a);
}