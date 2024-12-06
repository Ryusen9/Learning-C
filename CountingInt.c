#include <stdio.h>
int main() {
    int num, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}