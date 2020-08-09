#include <stdio.h>

int main() {
    printf("Integer: %zd\n", sizeof(int));
    printf("Float: %zd\n", sizeof(float));
    printf("Character: %zd\n", sizeof(char));
    printf("Boolean: %zd\n", sizeof(_Bool));
    printf("Long: %zd\n", sizeof(long));
    printf("Short: %zd\n", sizeof(short));
    printf("Long long: %zd\n", sizeof(long long));
    printf("Double: %zd\n", sizeof(double));
    printf("Long Double: %zd\n", sizeof(long double));
    
    return 0;
}
