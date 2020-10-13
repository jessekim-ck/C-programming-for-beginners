#include <stdio.h>
#include <stdlib.h>


void main() {
    FILE *fp;
    
    fp = fopen("file.txt", "w+");
    if (fp == NULL) {
        exit(-1);
    }

    int ch;
    for (ch = 33; ch <= 100; ch++) {
        fputc(ch, fp);  // puts ASCII letter
    }
    fputs("\nThis is Jason Fedin Course.\n", fp);
    fputs("I am happy to be here\n", fp);
    fprintf(fp, "%s %s %s %i", "Hello", "I", "am", 27);

    fclose(fp);
    fp = NULL;
}