#include <stdio.h>
#define YEARS 3
#define MONTHS 12

void main() {

    float weather_history[YEARS][MONTHS] = {
        {3.5, 2.4, 6.5, 4.1, 5.2, 6.4, 1.2, 5.5, 7.1, 1.5, 1.1, 1.2},
        {4.5, 2.4, 6.5, 4.1, 5.2, 6.4, 1.2, 5.5, 7.1, 1.5, 1.1, 1.2},
        {5.5, 2.4, 6.5, 4.1, 5.2, 6.4, 1.2, 5.5, 7.1, 1.5, 1.1, 1.2},
    };
    float yearly_averages[YEARS] = {0};
    float monthly_averages[MONTHS] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 12; j++) {
            yearly_averages[i] += weather_history[i][j] / MONTHS;
            monthly_averages[j] += weather_history[i][j] / YEARS;
        }
    }

    printf("\nYearly: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", yearly_averages[i]);
    }

    printf("\nMonthly: ");
    for (int i = 0; i < 12; i++) {
        printf("%.2f ", monthly_averages[i]);
    }
}
