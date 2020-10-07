#include <stdio.h>

int main() {

    for (int count = 1; count <= 10; ++count) {
        printf("%d\n", count);
    }

    for (int i = 1, j = 10; i <= 10; ++i, j += 10) {
        if (i == 3) {
            continue;
        }
        printf("i: %i, j: %i\n", i, j);
        if (i == 8) {
            break;
        }
    }

    unsigned int sum = 0;
    for (int i = 1; i <= 10; sum += i++) {}
    printf("Sum: %i\n", sum);

    return 0;
}