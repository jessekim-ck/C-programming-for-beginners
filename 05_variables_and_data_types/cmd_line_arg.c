#include <stdio.h>

int main(int argc, char *argv[]) {
    int num_args = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Number of args: %d\n", num_args);
    printf("Arg 1: %s\n", arg1);  // program name
    printf("Arg 2: %s\n", arg2);

    return 0;
}
