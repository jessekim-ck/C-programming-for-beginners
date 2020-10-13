#include <stdio.h>
#include <stdlib.h>


void main() {
    FILE *fp;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file.");
        exit(-1);
    }
    fseek(fp, 0, SEEK_END);  // go to end of the file
    len = ftell(fp);
    fclose(fp);

    fpos_t position;
    fp = fopen("file.txt", "w+");
    fgetpos(fp, &position);
    fputs("Hello, world!", fp);
    fclose(fp);

    printf("Total size of the file: %d bytes.\n", len);
}
