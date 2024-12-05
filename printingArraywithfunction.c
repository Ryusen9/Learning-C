#include <stdio.h>
int printingArray(int x[]) {
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Original array: ");
    printingArray(arr);
    return 0;
}