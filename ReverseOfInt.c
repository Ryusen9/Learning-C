#include <stdio.h>
int main() {
    int num, sum = 0, temp, rem;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp/=10;
    }
    printf("The reversed int %d is %d", num, sum);
    return 0;
}