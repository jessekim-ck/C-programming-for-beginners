#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void main() {
    FILE *file_ptr = NULL;
    FILE *new_file_ptr = NULL;

    char *file_name = "2.txt";
    file_ptr = fopen(file_name, "r");
    if (file_ptr == NULL) {
        printf("File does not exist.\n");
        exit(-1);
    }
    new_file_ptr = fopen("tmp.txt", "w");

    int c;
    while ((c = fgetc(file_ptr)) != EOF) {
        fputc(toupper(c), new_file_ptr);
    }

    fclose(file_ptr);
    fclose(new_file_ptr);
    file_ptr = NULL;
    new_file_ptr = NULL;

    remove(file_name);
    rename("tmp.txt", file_name);
}
