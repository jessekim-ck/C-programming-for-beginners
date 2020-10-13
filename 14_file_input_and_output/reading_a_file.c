#include <stdio.h>
#include <stdlib.h>


void main() {
    FILE *fp;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        exit(-1);
    }

    // get char
    // int c;
    // while ((c = fgetc(fp)) != EOF) {
    //     printf("%c", c);
    // }

    // get string
    char *s = (char *) malloc(60 * sizeof(char));
    while (fgets(s, 60, fp) != NULL) {
        printf("%s", s);
    }

    fclose(fp);
    fp = NULL;
}