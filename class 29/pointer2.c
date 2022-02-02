#include <stdio.h>

void main() {
    int* pc, c, d;
    c = 10;
    d = 20;
    pc = &c;
    printf("%d ", *pc);
    pc = &d;
    printf("%d ", *pc);
}