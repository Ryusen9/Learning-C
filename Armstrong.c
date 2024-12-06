#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0, temp, rem, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    printf("%d\n", count);
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum+=pow(rem, count);
        temp /= 10;
    }
    if(sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}