#include <stdio.h>
#include <conio.h>

void main() {
    int c;
    while ((c=getchar()!=EOF)) {
        putchar(c);
    }
}