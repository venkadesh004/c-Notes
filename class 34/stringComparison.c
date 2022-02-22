#include <stdio.h>

int strcmpNew(char *s, char *t) {
    int i=0;
    for (i=0; s[i] == t[i]; i++) {
        if (s[i] == '\0') {
            return 0;
        }
    }
    return s[i] - t[i];
}

int strcmpAnother(char *s, char *t) {
    for(; *s == *t; s++, t++) {
        if (*s == '\0') {
            return 0;
        }
    }
    return *s - *t;
}

int main() {
    char s[] = "venkadesh", t[] = "venkadesh";
    printf("%d", strcmpNew(&s[0], &t[0]));
    return 0;
}