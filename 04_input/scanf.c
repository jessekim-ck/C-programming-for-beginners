#include <stdio.h>

int main() {    
    char str[100];
    int i;

    printf("Enter a value: ");
    // put & for reading basic variable types other than char
    scanf("%s %d", str, &i);
    printf("You entered: %s %d", str, i);

    double dbl;

    printf("\nEnter a value: ");
    scanf("%lf", &dbl);
    printf("You entered: %lf", dbl);
    
    return 0;
}
