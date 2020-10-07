#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // random number generator
    time_t t;
    srand((unsigned) time(&t));

    int rand_num = rand() % 21;
    int answer = 22;

    for (int count = 1; count <= 5; ++count) {
        printf("What is the number? (%i / 5): ", count);
        scanf("%i", &answer);

        if (answer > 21 || answer < 0) {
            printf("Answer is between 0 and 21\n");
        } else if (answer > rand_num) {
            printf("It's too big!\n");
        } else if (answer < rand_num) {
            printf("It's too small!\n");
        } else {
            printf("\nCorrect. You win!\n");
            break;
        }

        if (count == 5) {
            printf("\nYou lose. The number was %i\n.", rand_num);
        }
    }

    return 0;
}