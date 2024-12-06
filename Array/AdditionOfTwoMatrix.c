#include <stdio.h>
int main() {
    int n, row, col;
    printf("Enter the number of rows and columns : ");
    scanf("%d", &n);
    int matrix1[n][n], matrix2[n][n], result[n][n];
    printf("Enter the elements of first matrix : \n");
    for(row = 0; row < n; row++) {
        for(col = 0; col < n; col++) {
            printf("matrix1[%d][%d] = ", row, col);
            scanf("%d", &matrix1[row][col]);
        }
    }
    printf("Enter the elements of second matrix : \n");
    for(row = 0; row < n; row++) {
        for(col = 0; col < n; col++) {
            printf("matrix2[%d][%d] = ", row, col);
            scanf("%d", &matrix2[row][col]);
        }
    }
    for(row = 0; row < n; row++) {
        for(col = 0; col < n; col++) {
            result[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    }
    printf("Sum of the matrices : \n");
    for(row = 0; row < n; row++) {
        for(col = 0; col < n; col++) {
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }
    return 0;
}