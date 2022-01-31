#include <stdio.h>

void main() {
    int a=15, b=15, c=20;
    printf("%d == %d is %d \n", a, b, a==b);
    printf("%d == %d is %d \n", a, c, a==c);
    printf("%d > %d is %d \n", a, b, a>b);
    printf("%d > %d is %d \n", a, b, a>c);
    printf("%d < %d is %d \n", a, b, a<b);
    printf("%d < %d is %d \n", a, b, a<c);
}