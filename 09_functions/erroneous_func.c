#include <stdio.h>


void err_func() {
    return 0;
}


void main() {

    int output;

    output = err_func();  // void value cannot be assigned
    printf("%i", output);
}
