#include <stdio.h>
#include <stdlib.h>


void main() {

    // open file
    FILE *p_file = NULL;
    char *file_name = "my_file.txt";
    p_file = fopen(file_name, "w");
    if (p_file == NULL) {
        printf("Failed to open %s.\n", file_name);
        exit(-1);
    }

    // close file
    fclose(p_file);
    p_file = NULL;

    // rename file
    char *new_file_name = "new_file.txt";
    int renamed = rename(file_name, new_file_name);
    if (renamed != 0) {
        printf("Failed to rename the file!");
    }

    // delete file
    remove(new_file_name);
}