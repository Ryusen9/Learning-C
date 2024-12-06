#include <stdio.h>
int main() {
    int num, count = 0, i;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    if(num == 1) {
        printf("%d is a co-prime number.\n", num);
        return 0;
    } else if (num == 2 || num == 3) {
        printf("%d is a prime number.\n", num);
        return 0;
    } else {
        for(i = 2; i <= (num/2); i++) {
            if(num % i == 0) {
                count = 1;
                break;
            }
        }
        if(count == 1) {
            printf("%d is not a prime number.\n", num);
        } else {
            printf("%d is a prime number.\n", num);
        }
    }
    return 0;
}