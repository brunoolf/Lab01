// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

void print_matrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose_matrix(int matrix[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    printf("Número de linhas e colunas da matriz: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    
    printf("Elementos da matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int transposed[100][100];
    transpose_matrix(matrix, transposed, rows, cols);

    printf("Matriz transposta:\n");
    print_matrix(transposed, cols, rows);

    return 0;
}