#include <stdio.h>

int main() {
    int matrix[10][10], row, col, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Check if matrix is square (required for diagonal)
    if(row != col) {
        printf("Diagonal sum is only defined for square matrices!\n");
        return 1;
    }

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for(i = 0; i < row; i++) {
        sum += matrix[i][i];
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}