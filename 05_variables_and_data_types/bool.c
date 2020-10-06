#include <stdio.h>
#include <stdbool.h>

int main() {

    _Bool true_data = 1;  // traditional style
    bool false_data = false;  // included by stdbool.h

    printf("%i %i", true_data, false_data);

    return 0;
}