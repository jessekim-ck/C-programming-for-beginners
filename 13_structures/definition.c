#include <stdio.h>


void main() {
    // define a struct
    struct date {
        int month;
        int day;
        int year;
    };

    // create a variable of struct type
    struct date today;
    today.day = 12;
    today.month = 10;
    today.year = 2020;
    // equivalents
    // struct date today = {12, 10, 2020};
    // struct date today = {.day = 12, .month = 10, .year = 2020};

    printf("Today is %ith %i, %i.\n", today.day, today.month, today.year);
    printf("Here is %ith century.\n", today.year / 100 + 1);


    // it is just valid
    struct date array_of_structures[10];
    array_of_structures[0].day = 13;
    array_of_structures[0].month = 10;
    array_of_structures[0].year = 2020;


    // containing arrays as the member of a struct is also valid
    struct month {
        int number_of_days;
        char name[3];
    };


    struct time {
        int hours;
        int minutes;
        int seconds;
    };

    // nested structure
    struct datetime {
        struct date sdate;
        struct time stime;
    };
}
