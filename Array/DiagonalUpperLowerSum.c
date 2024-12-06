#include <stdio.h>
int main() {
    int n, i, j, diagonal = 0, upper = 0, lower = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the 2D matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                diagonal += matrix[i][j];
            } else if (i < j) {
                upper += matrix[i][j];
            } else {
                lower += matrix[i][j];
            }
        }
    }
    printf("Sum of\nDiagonal = %d\nUpper = %d\nLower = %d\n", diagonal, upper, lower);
    return 0;
}