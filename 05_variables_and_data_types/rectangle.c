#include <stdio.h>

int main() {

    double width, height;
    double perimeter, area;

    printf("Width, height of the rectangle: ");
    scanf("%lf %lf", &width, &height);

    perimeter = 2.0 * (width + height);
    area = width * height;

    printf("\nWidth: %.4lf | Height: %.4lf\n", width, height);
    printf("Area: %.4lf | Perimeter: %.4lf\n", area, perimeter);

    return 0;
}
