#include <stdio.h>
int main() {
    char str1[100] = "Bangladesh", str2[100] = "Beautiful";
    int i = 0;
    while(str1[i] != '\0') {
        i++;
    }
    int j = 0;
    while(str2[j] != '\0') {
        str1[i + j] = str2[j];
        j++;
    } 
    str1[i + j] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}