#include <stdio.h>
int main() {
    int num, sum, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp/=10;
    }
    if(num == sum) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}