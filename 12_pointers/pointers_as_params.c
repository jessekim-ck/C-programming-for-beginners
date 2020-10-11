#include <stdio.h>


void square(int *x);


void main() {
    int x = 16;
    square(&x);  // pass address
    printf("Square of x is: %i\n", x);
}


void square(int *x) {
    *x = (*x) * (*x);
}
