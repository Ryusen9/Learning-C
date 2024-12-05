#include <stdio.h>
double areaOfRectangle(double l, double b) {
    return l * b;
}

int main() {
    double area = areaOfRectangle(2.5, 3);
    printf("Area of rectangle: %.2lf\n", area);
    return 0;
}