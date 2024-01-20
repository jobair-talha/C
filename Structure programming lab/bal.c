#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int *mat1, int *mat2, int *result) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(result + i * COLS + j) = *(mat1 + i * COLS + j) + *(mat2 + i * COLS + j);
        }
    }
}

void printMatrix(int *matrix) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", *(matrix + i * COLS + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0]);

    printf("Sum of matrices:\n");
    printMatrix(&result[0][0]);

    return 0;
}
