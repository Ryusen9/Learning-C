#include <stdio.h>
#include <string.h>
int main() {
    char str1[30] = "Dhaka", str2[30] = "Mirpur", temp[30];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("String 1: %s\nString 2: %s\n", str1, str2);
    return 0;
}