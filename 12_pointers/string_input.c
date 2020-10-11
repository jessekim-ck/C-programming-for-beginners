#include <stdio.h>
#include <stdlib.h>


void main() {

    int limit;
    char *p_str = NULL;
    
    printf("Enter limit: ");
    scanf("%i", &limit);

    p_str = (char *) malloc(limit * sizeof(char));
    if (!p_str) {
        exit;
    }

    printf("Now enter string: ");
    // scanf(" ");
    // gets(p_str);
    scanf("%s", p_str);

    printf("You have entered: %s\n", p_str);

    free(p_str);
    p_str = NULL;
}
