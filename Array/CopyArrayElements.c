#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6}, arr2[6];
    for(int i = 0; i < 6; i++) {
        arr2[i] = arr[i];
    }
    printf("Array 1 : ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array 2 : ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}