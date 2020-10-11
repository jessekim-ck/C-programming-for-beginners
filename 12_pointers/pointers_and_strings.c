#include <stdio.h>


void cpy_str_(char to[], char from[]) {
    int i;

    for (i = 0; from[i] != '\0'; ++i) {
        to[i] = from[i];
    }

    to[i] = '0';
}


void cpy_str(char *to, char *from) {
    // for (; *from != '\0'; ++from, ++to) {
    //     *to = *from;
    // }
    while (*from) {  // '\0' == 0
        *to++ = *from++;
    }
    *to = '\0';
}
