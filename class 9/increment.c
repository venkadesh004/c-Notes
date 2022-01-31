#include <stdio.h>

void main() {
    int a=20, b=14;
    int result = a++;
    printf("The result is %d \n", result);
    result = ++b;
    printf("The result is %d \n", result);
}