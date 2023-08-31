// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>
#include <stdlib.h>

int **matrix;
int rows, cols; 

void allocate_matrix() {
  matrix = (int**)malloc(rows * sizeof(int*));
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int*)malloc(cols * sizeof(int)); 
  }
}

void free_matrix() {
  for (int i = 0; i < rows; i++) {
    free(matrix[i]);
  }
  free(matrix);
}

void print_matrix() {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

void operate_rows(int row1, int row2, char op) {
  if (row1 < 0 || row1 >= rows || row2 < 0 || row2 >= rows) {
    printf("Linha inválida!\n");
    return;
  }

  if (op != '+' && op != '*') {
    printf("Operação inválida!\n");
    return; 
  }

  for (int j = 0; j < cols; j++) {
    if (op == '+') {
      matrix[row2][j] += matrix[row1][j];
    } else if (op == '*') {
      matrix[row2][j] *= matrix[row1][j];
    }
  }
}

int main() {

  printf("Número de linhas: ");
  scanf("%d", &rows);
  printf("Número de colunas: ");  
  scanf("%d", &cols);

  allocate_matrix();

  printf("Elementos da matriz:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\nMatriz original:\n");
  print_matrix();

  int row1, row2;
  char op;

  printf("\nLinha 1: ");
  scanf("%d", &row1);
  printf("Linha 2: ");
  scanf("%d", &row2);
  printf("Operação (+ ou *): ");
  scanf(" %c", &op);

  operate_rows(row1, row2, op);

  printf("\nMatriz após operação:\n"); 
  print_matrix();

  free_matrix();

  return 0;
}
