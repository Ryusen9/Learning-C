#include <stdio.h>
int main() {
    int matrix[2][2];
    printf("Enter elements of the matrix:\n");
    for(int row = 0; row < 2; row++) {
        for(int col = 0; col < 2; col++) {
            printf("matrix[%d][%d] = ", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }
    printf("The matrix is \n");
        for(int row = 0; row < 2; row++) {
            for(int col = 0; col < 2; col++) {
                printf("%d ", matrix[row][col]);
            }
            printf("\n");
        }

    return 0;
}