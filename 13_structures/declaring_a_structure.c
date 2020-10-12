#include <stdio.h>
#include <string.h>


void main() {
    struct employee {
        char name[20];
        int hire_date;
        float salary;
    };

    struct employee jesse = {"Jesse Kim", 2, 10000.0};

    struct employee new_employee;
    char name[20];
    int hire_date;
    float salary;

    printf("Name: ");
    scanf("%s", name);
    strcpy(new_employee.name, name);

    printf("Hire date: ");
    scanf("%i", &hire_date);
    new_employee.hire_date = hire_date;

    printf("Salary: ");
    scanf("%f", &salary);
    new_employee.salary = salary;

    printf("%s, %i, %f\n", new_employee.name, new_employee.hire_date, new_employee.salary);
}
