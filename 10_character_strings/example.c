#include <stdio.h>
#include <string.h>


int main() {
    char my_string[] = "My name is Jesse Kim";
    char tmp_string[50];

    // you should consider the null character memory
    strncpy(tmp_string, my_string, sizeof(tmp_string) - 1);
    printf("The string is: %s\n", tmp_string);

    printf("Your string is: ");
    scanf("%s", my_string);  // no &
    printf("%s", my_string);

    return 0;
}
