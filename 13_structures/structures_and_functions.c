/*
It is just more efficient (and compatible) to take as argumant
a pointer of a structure than to take a structure itself.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


struct family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};


bool is_siblings(struct family const *pmember1, 
                 struct family const *pmember2) {
    if (strcmp(pmember1->mother, pmember2->mother) == 0) {
        return true;
    } else {
        return false;
    }
}
