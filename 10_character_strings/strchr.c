#include <stdio.h>
#include <string.h>


void main() {

    char str[] = "The quick brown fox";
    char ch = 'q';  // char
    char *got_char = NULL;

    got_char = strchr(str, ch);
    printf("%s", got_char);
}