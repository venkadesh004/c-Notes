#include <stdio.h>

void change(int num) {
    printf("Before adding in function call num=%d \n", num);
    num+=100;
    printf("After addition in funtion call num=%d \n", num);
}

void main() {
    int x = 100;
    printf("Before the function call x=%d \n", x);
    change(x);
    printf("After function call x=%d \n", x);
}