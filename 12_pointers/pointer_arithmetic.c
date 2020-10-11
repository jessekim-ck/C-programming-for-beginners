#include <stdio.h>


int array_sum(int array[], const int n) {
    int sum = 0, *ptr;
    int *const array_end = array + n;

    for (ptr = array; ptr < array_end; ++ptr) {
        sum += *ptr;
    }

    return sum;
}


// equivalent
int array_sum_(int *array, const int n) {
    int sum = 0;
    int *const array_end = array + n;

    for (; array < array_end; ++array) {
        sum += *array;
    }

    return sum;
}


void main() {
    int array_sum(int array[], const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", array_sum(values, 10));
}
