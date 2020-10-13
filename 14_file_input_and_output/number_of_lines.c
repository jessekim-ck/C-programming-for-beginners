#include <stdio.h>
#include <stdlib.h>


void main() {
    FILE *file_ptr = NULL;
    file_ptr = fopen("1.txt", "r");
    if (file_ptr == NULL) {
        printf("File does not exist.\n");
        exit(-1);
    }

    char c;
    int count = 1;
    while ((c = fgetc(file_ptr)) != EOF) {
        if (c == '\n') {
            ++count;
        }
    }

    printf("The file has %i lines.\n", count);

    fclose(file_ptr);
}