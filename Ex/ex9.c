// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>
#include <stdlib.h>

void replace_negatives(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = abs(matrix[i][j]);
        }
    }
}

void print_matrix(int rows, int cols, const int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Número de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Número de colunas da matriz: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Eelementos da matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matriz original:\n");
    print_matrix(rows, cols, matrix);

    replace_negatives(rows, cols, matrix);

    printf("\nMatriz com números negativos substituídos pelo módulo:\n");
    print_matrix(rows, cols, matrix);

    return 0;
}
