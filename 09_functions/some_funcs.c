#include <stdio.h>


// function prototypes
int gcd(int a, int b);
float abs(float a);
float sqrt(float a);
float square(float a);
float sqrt(float a);


int main() {
    float num;
    printf("SQRT of ");
    scanf("%f", &num);
    printf("is %f", sqrt(num));

    int a, b;
    printf("\n\nGCD of ");
    scanf("%i %i", &a, &b);
    printf("is %i", gcd(a, b));

    float c;
    printf("\n\nABS of ");
    scanf("%f", &c);
    printf("is %f", c);

    return 0;
}


int gcd(int a, int b) {
    int smaller;
    int output;

    if (a < b) {
        smaller = a;
    } else {
        smaller = b;
    }

    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            output = i;
        }
    }

    return output;
}


float abs(float a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }
}


float square(float a) {
    return a*a;
}


float sqrt(float a) {
    long e = 1e-8;
    long target_num;

    if (a < 0) {
        return -1.0;
    } else if (a < 1) {
        target_num = 1 / a;
    } else {
        target_num = a;
    }

    long upper_bound = target_num;
    long lower_bound = 1;
    long output = (upper_bound + lower_bound) / 2;

    while (1) {
        if (square(output) > target_num) {
            upper_bound = output;
        } else {
            lower_bound = output;
        }
        output = (upper_bound + lower_bound) / 2;
        if (abs(square(output) - target_num) < e) {
            break;
        }
    }

    if (a < 1) {
        return 1 / output;
    } else {
        return output;
    }
}
