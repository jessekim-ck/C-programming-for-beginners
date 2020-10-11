#include <stdio.h>


void main() {
    int *p_number;  // not initialized - dangerous!
    char *p_char = NULL;
    float *p_float = NULL;
    // format specifier of pointer is `%p`
    printf("%p %p %p\n", p_number, p_char, p_float);

    int number = 99;
    p_number = &number;  // `&` to get an address
    printf("%i\n", *p_number);  // `*` for deferencing
}
