#include <stdio.h>
int main() {
    int n1, n2, n3, sum = 0;
    printf("Enter the n1, n2 and n3 values of the series = ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("1*3*4 + 2*5*6 + .... + %d*%d*%d = ", n1, n2, n3);
    int a = 1, b = 3, c = 4;
    while (a <= n1 && b <= n2 && c <= n3)
    {
        sum += a * b * c;
        a += 1;
        b += 2;
        c += 2;
    }
    printf("%d\n", sum);
    return 0;
}