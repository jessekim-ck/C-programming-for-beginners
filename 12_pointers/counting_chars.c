#include <stdio.h>


int count_char(const char *str);


void main() {
    char str[] = "Hello how are you?";
    printf("The number of chars: %i\n", count_char(str));
}


int count_char(const char *str) {
    const char *original_str = str;
    while (*str) ++str;
    return (int) (str - original_str);
}
