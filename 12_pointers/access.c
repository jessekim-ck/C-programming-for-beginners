#include <stdio.h>


void main() {
    int number = 15;
    int *p = &number;  // memory address of `nubmer`
    int result = *p + 5;  // 20

    printf("The address of p: %p\n", (void*)&p);  // address of a pointer
    printf("The value of p: %p\n", p);  // value (address)
    printf("The value p is pointing to: %i\n", *p);
    printf("The size of p: %zd\n", sizeof(p));

    *p += 25;
    ++*p;  // does work
    *p++;  // does not work!
    printf("Now number is: %i\n", number);
}
