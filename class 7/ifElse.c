#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num%2==0) {
        printf("%d is even.", num);
    } else {
        printf("%d is odd.", num);
    }
    printf("\n");
    return 0;
}