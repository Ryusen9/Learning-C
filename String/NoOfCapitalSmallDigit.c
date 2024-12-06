#include <stdio.h>
int main() {
    char str1[100] = "DHAKA 123 avocado";
    int i, capital, small, digit;
    i = capital = small = digit = 0;
    while(str1[i] != '\0') {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            capital++;
        else if(str1[i] >= 'a' && str1[i] <= 'z')
            small++;
        else if(str1[i] >= '0' && str1[i] <= '9')
            digit++;
        i++;
    }
    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);
    printf("Number of digits: %d\n", digit);
    return 0;
}