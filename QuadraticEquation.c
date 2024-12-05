#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    double d,r1, r2, firstPart, secondPart;
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d == 0) {
        printf("The roots are real and equal.\n");
        r1 = -b / (2 * a);
        r2 = r1;
        printf("The roots are %lf and %lf.\n", r1, r2);
    } else if (d > 0) {
        printf("The roots are real but different.\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are %lf and %lf.\n", r1, r2);
    } else {
        printf("The roots are imaginary.\n");
        firstPart = -b / (2 * a);
        secondPart = sqrt(abs(d)) / (2 * a);
        printf("Root 1 = %.2lf + i %.2lf\n", firstPart, secondPart); 
        printf("Root 2 = %.2lf - i %.2lf\n", firstPart, secondPart); 
    }
    return 0;
}