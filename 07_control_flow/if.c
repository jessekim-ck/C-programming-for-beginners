#include <stdio.h>

int main() {

    int i = 0;

    // conditional statements
    if (i == 0) {
        printf("i is 0\n");
    } else if (i == 1) {
        printf("i is 1\n");
    } else {
        printf("i is some other number\n");
    }

    i++;

    // ternary operator ?
    i == 0 ? printf("i is 0\n") : printf("i is not 0\n");

    return 0;
}