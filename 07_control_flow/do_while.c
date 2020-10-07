#include <stdio.h>

int main() {

    int count = 1;
    while (count <= 5) {
        printf("%i\n", count);
        ++count;
    }

    int num = 1;
    while (num != 0) {
        printf("Number: ");
        scanf("%i", &num);
    }

    count = 1;
    do {
        printf("%i\n", count);
        ++count;
    } while (count <= 5);

    return 0;
}