#include <stdio.h>

void main() {

    int primes[100] = {0};
    int count = 0;
    
    for (int i = 2; i <= 100; i++) {

        _Bool is_prime = 1;

        // iterate over previous primes
        for (int c = 0; primes[c] != 0; c++) {
            if (i % primes[c] == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            primes[count] = i;
            printf("%i ", i);
            count++;
        }
    }
}
