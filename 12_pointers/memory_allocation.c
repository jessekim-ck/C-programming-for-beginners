#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
    char *str;

    // initial memory alloation
    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "Jason");
    printf("String: %s, address: %p\n", str, str);

    // rellocating memory
    str = (char *) realloc(str, 25);  // retain prev contents
    strcat(str, ".com");
    printf("String: %s, address: %p\n", str, str);

    free(str);
}
