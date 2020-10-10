#include <stdio.h>
#include <string.h>


void main() {

    char str[] = "Hello how are you?";
    const char s[2] = " ";
    char *token;  // is a pointer

    token = strtok(str, s);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
}