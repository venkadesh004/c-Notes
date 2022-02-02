#include <stdio.h>

void main() {
    int number = 10;
    int* p;
    p = &number;
    printf("Address of p variable is %u\n", p);
    p = p+4;
    printf("After adding 4: Address of p variable is %u\n", p);
}