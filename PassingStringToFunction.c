#include <stdio.h>
#include <string.h>
void display(char s1[]) {
    int d = strlen(s1);
    for(int i = 0; i < d; i++) {
        printf("%c\n", s1[i]);
    }
}

int main() {
    char str[] = "Bangladesh";
    display(str);
}