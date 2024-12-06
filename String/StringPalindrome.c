#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "Bangladesh", str2[50];
    int i = 0, j = strlen(str1) - 1;
    while(i < j) {
        if(str1[i] != str1[j]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        j--;
    } 
    printf("Is palindrome\n");
}