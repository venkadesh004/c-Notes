#include <stdio.h>

void strcpyNew(char *s, char *t) {
    int i=0;
    while((s[i] = t[i]) != '\0') {
        i++;
    }
}

void strcpyAnother(char *s, char *t) {
    int i=0;
    while((*s = *t) != '\0') {
        s++;
        t++;
    }
}

void strcpyNext(char *s, char *t) {
    while ((*s++ = *t++) != '\0');
}

void strcpyNextNew(char *s, char *t) {
    while (*s++ = *t++);
}

int main() {
    char s[10], t[] = "venkadesh";
    strcpyNew(&s[0], &t[0]);
    printf("%s", s);
    return 0;
}