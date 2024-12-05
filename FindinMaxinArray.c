#include <stdio.h>
int findMinAndMax (int x[]) {
    int max = x[0];
    for(int i = 0; i < 10; i++) {
        if(x[i] > max) {
            max = x[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maximum = findMinAndMax(arr);
    printf("Maximum value in the array: %d\n", maximum);
    return 0;
}