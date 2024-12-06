#include <stdio.h>
int main() {
    int a[5] = { 0, 1, 2, 3, 4};
    int *ptr;
    ptr = a;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}