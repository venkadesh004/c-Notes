#include <stdio.h>

void main() {
    int a = 1;
    LOOP:do {
            if(a==5) {
                a++;
                goto LOOP;
            } 
            printf("%d ", a);
            a++;
        } while (a<10);
}