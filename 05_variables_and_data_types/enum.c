#include <stdio.h>

int main() {

    enum Company {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("%d, %d, %d\n", xerox, google, ebay);

    return 0;
}
