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

void multiply_row(int matrix[][100], int row, int cols, int multiplier) {
    for (int j = 0; j < cols; j++) {
        matrix[row][j] *= multiplier;
    }
}

void multiply_column(int matrix[][100], int col, int rows, int multiplier) {
    for (int i = 0; i < rows; i++) {
        matrix[i][col] *= multiplier;
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

    int row_to_multiply, column_to_multiply, multiplier;
    printf("Número da linha a ser multiplicada: ");
    scanf("%d", &row_to_multiply);
    printf("Número da coluna a ser multiplicada: ");
    scanf("%d", &column_to_multiply);
    printf("Multiplicador: ");
    scanf("%d", &multiplier);

    if (row_to_multiply > 0 && row_to_multiply <= rows) {
        multiply_row(matrix, row_to_multiply - 1, cols, multiplier);
    } else {
        printf("Linha inválida.\n");
        return 1;
    }

    if (column_to_multiply > 0 && column_to_multiply <= cols) {
        multiply_column(matrix, column_to_multiply - 1, rows, multiplier);
    } else {
        printf("Coluna inválida.\n");
        return 1;
    }

    printf("Matriz resultante:\n");
    print_matrix(matrix, rows, cols);

    return 0;
}