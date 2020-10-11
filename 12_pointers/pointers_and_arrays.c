#include <stdio.h>
#include <string.h>


void main() {
    int i;
    char multiple[] = "a string";
    char *p = multiple;

    for (i = 0; i < strlen(multiple); ++i) {
        printf("%c %c %p %p\n", multiple[i], *(p + i), &multiple[i], p + i);
    }
}
