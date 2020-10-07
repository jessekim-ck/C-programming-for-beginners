#include <stdio.h>

// constant variable
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main() {

    float hours;
    float pay;
    float tax;
    
    printf("Number of hours: ");
    scanf("%f", &hours);
    printf("\n");

    pay = hours * PAYRATE;
    if (hours > OVERTIME) {
        pay += (hours - OVERTIME)*(PAYRATE / 2);
    }

    if (pay < 300) {
        tax = pay*TAXRATE_300;
    } else if (pay < 450) {
        tax = 300*TAXRATE_300 + (pay - 300)*TAXRATE_150;
    } else {
        tax = 300*TAXRATE_300 + 150*TAXRATE_150 + (pay - 450)*TAXRATE_REST;
    }

    printf("Your payment is %.2f dollars\n", pay - tax);
    
    return 0;
}