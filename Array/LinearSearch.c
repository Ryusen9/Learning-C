#include <stdio.h>
int main() {
    int arr[6] = {1, 4, 6, 8, 9, 14}, num;
    int position = -1;
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    for(int i = 0; i < 6; i++) {
        if(arr[i] == num) {
            position = i+1;
            printf("Number %d is found is position %d\n", num, position);
            break;
        }
    }
    if(position == -1) {
        printf("Number %d is not found in the array\n", num);
    }
    return 0;
}