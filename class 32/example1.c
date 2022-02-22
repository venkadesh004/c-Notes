#include <stdio.h>

void swap(int, int);
void swapPermanent(int*, int*);

int main() {
    int a = 10;
    int b = 20;
    printf("Before swapping the values in main a = %d, b = %d\n", a, b);
    swap(a,b);
    printf("After swapping values in main a = %d, b = %d\n", a, b);
    printf("Before swapping permanently in main a = %d, b = %d\n", a, b);
    swapPermanent(&a,&b);
    printf("After swapping permanently in main a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swapping values in swap function x = %d, y = %d\n", x, y);
}

void swapPermanent(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping permanently in swapPermanent function x = %d, y = %d\n", *x, *y);
}