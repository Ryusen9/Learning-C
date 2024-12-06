#include <stdio.h>
int main() {
    int num, count, i;
    printf("prime number from 1 to 100: \n");
    for(num = 1; num <= 100; num++) {
        if(num == 1) {
            continue;
        } else if (num == 2 || num == 3) {
            printf("%d ", num);
            continue;
        } else {
            count = 0;
            for(i = 2; i <= (num/2); i++) {
                if(num % i == 0) {
                    count = 1;
                    break;
                }
            }
            if(count == 0) {
                printf("%d ", num);
            }
        }
    }
    printf("\n");
    return 0;  
}