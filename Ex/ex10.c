// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiply_row_or_column(int size, int array[size], int multiplier) {
    for (int i = 0; i < size; i++) {
        array[i] *= multiplier;
    }
}

int main() {
    int rows, cols;

    printf("Número de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Número de colunas da matriz: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Elementos da matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matriz original:\n");
    print_matrix(rows, cols, matrix);

    int index, multiplier;

    printf("\nNúmero da linha ou coluna a ser multiplicada: ");
    scanf("%d", &index);

    if (index >= 0 && index < rows) {
        printf("Fator de multiplicação: ");
        scanf("%d", &multiplier);
        multiply_row_or_column(cols, matrix[index], multiplier);
        printf("\nMatriz após multiplicar a linha %d por %d:\n", index, multiplier);
        print_matrix(rows, cols, matrix);
    } else if (index >= 0 && index < cols) {
        printf("Fator de multiplicação: ");
        scanf("%d", &multiplier);
        for (int i = 0; i < rows; i++) {
            matrix[i][index] *= multiplier;
        }
        printf("\nMatriz após multiplicar a coluna %d por %d:\n", index, multiplier);
        print_matrix(rows, cols, matrix);
    } else {
        printf("Número de linha ou coluna inválido.\n");
    }

    return 0;
}
