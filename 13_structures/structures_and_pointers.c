#include <stdio.h>
#include <stdlib.h>


void main() {
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today = {12, 10, 2020};
    struct date *date_ptr = NULL;
    date_ptr = &today;

    // you can access to the members like
    int day_tomorrow = date_ptr->day + 1;  // syntax sugar
    // int day_tomorrow = (*date_ptr).day + 1;
    printf("The day of tomorrow is %i.\n", day_tomorrow);


    // also valid to contain a pointer as a memeber
    struct int_ptrs {
        int *p1;
        int *p2;
        char *str;  // string as char pointer
    };

    struct int_ptrs pointers;
    int i1 = 100, i2;
    char str[] = "Hey I'm Jesse.";
    pointers.p1 = &i1;
    pointers.p2 = (int *) malloc(sizeof(int));
    *pointers.p2 = 101;
    pointers.str = str;
    printf("%i, %i, %s\n", *pointers.p1, *pointers.p2, pointers.str);
}