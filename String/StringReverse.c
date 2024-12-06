#include <stdio.h>
int main() {
    char str1[30] = "Beautiful", str2[30];
    int i = 0;
    while(str1[i] != '\0') {
        i++;
    }
    int j = 0;
    int index = i - 1;
    while(index >= 0) {
        str2[j] = str1[index];
        j++;
        index--;
    }
    str2[j] = '\0';
    printf("Reversed string: %s", str2);
    return 0;
}