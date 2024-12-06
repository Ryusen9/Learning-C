#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);
    return 0;
}