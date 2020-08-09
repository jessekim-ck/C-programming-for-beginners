#include <stdio.h>

int main() {

    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    // Operation btw float and int results in float data
    float years = (float) minutes / (60 * 24 * 365);  // type casting
    float days = (float) minutes / (60 * 24);
    printf("%d minutes is %f years and %f days.\n", minutes, years, days);

    return 0;
}
