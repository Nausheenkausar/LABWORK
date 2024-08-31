#include <stdio.h>
#include <stdlib.h>

// Addition of two matrices
int main() {
    int row, col, i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &row, &col);

    int matrix1[row][col], matrix2[row][col], sum[row][col];

    // Input elements for the first matrix
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter the element of the first matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter the element of the second matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the matrices
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Printing the resultant matrix
    printf("Resultant Matrix after Addition:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

