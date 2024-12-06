#include <stdio.h>
int main() {
    char str[] = "Bangladesh";
    int i;
    while(str[i] != '\0') {
        i ++;
    }
    printf("Length of the string: %d\n", i);
}