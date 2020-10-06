#include <stdio.h>

int main() {

    int i = 0;

    switch (i) {
        case 0:
            printf("i is 0\n");
            break;
        case 1:
            printf("i is 1\n");
            break;
        default:
            printf("i is some other number\n");
            break;
    }

    return 0;
}