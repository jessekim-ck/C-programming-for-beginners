#include <stdio.h>
#include <stdlib.h>


void main() {
    FILE *file_ptr = NULL;

    file_ptr = fopen("3.txt", "r");
    if (file_ptr == NULL) {
        printf("File does not exist.\n");
        exit(-1);
    }

    int len;
    int count = 0;
    
    fseek(file_ptr, 0, SEEK_END);
    len = ftell(file_ptr);

    while (count < len) {
        count++;
        fseek(file_ptr, -count, SEEK_END);
        printf("%c", fgetc(file_ptr));
    }
    printf("\n");

    fclose(file_ptr);
    file_ptr = NULL;
}
