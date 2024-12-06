#include <stdio.h>
int main() {
    int n, rows, cols;
    printf("Enter the number of rows and columns : ");
    scanf("%d", &n);
    int matrix[n][n], transpose[n][n];
    printf("Enter the elements of the matrix : \n");
    for(rows = 0; rows < n; rows++) {
        for(cols = 0; cols < n; cols++) {
            printf("Enter element [%d][%d] : ", rows, cols);
            scanf("%d", &matrix[rows][cols]);
        }
    }
    printf("Original Matrix : \n");
    for(rows = 0; rows < n; rows++) {
        for(cols = 0; cols < n; cols++) {
            printf("%d ", matrix[rows][cols]);
        }
        printf("\n");
    }
    for(rows = 0; rows < n; rows++) {
        for(cols = 0; cols < n; cols++) {
            transpose[cols][rows] = matrix[rows][cols];
        }
    }
    printf("Transpose of the matrix : \n");
    for(rows = 0; rows < n; rows++) {
        for(cols = 0; cols < n; cols++) {
            printf("%d ", transpose[rows][cols]);
        }
        printf("\n");
    }
    return 0;
}