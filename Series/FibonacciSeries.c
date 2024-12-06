#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the n terms of the fibonacci series: ");
    scanf("%d", &n);
    int first = 1, second = 1, fibo = 0;
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", first);
        } else if (i == 2) {
            printf("%d ", second);
        } else {
            fibo = first + second;
            printf("%d ", fibo);
            first = second;
            second = fibo;
        }
    }
}