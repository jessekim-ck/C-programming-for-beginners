#include <stdio.h>

int main() {

    enum Company {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY = 10,
        MICROSOFT  // 11
    };

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("%d, %d, %d\n", xerox, google, ebay);
    // 2, 0, 10

    return 0;
}
