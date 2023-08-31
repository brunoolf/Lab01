// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>
#include <string.h>

void insert_char_at_position(char str[], char c, int pos) {
  int len = strlen(str);

  if (pos < 0 || pos > len) {
    printf("Posição inválida!\n");
    return;
  }

  for (int i = len; i > pos; i--) {
    str[i] = str[i - 1];
  }

  str[pos] = c;
}

int main() {
  char str[100];
  int insert_position;

  strcpy(str, "Exemplo de string");
  printf("String original: %s\n", str);

  printf("Posição em que o caractere deverá ser adicionado: ");
  scanf("%d", &insert_position);
  insert_char_at_position(str, 'X', insert_position);

  printf("Depois de inserir o caractere: %s\n", str);
  
  return 0;
}
