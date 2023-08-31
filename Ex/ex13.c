// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>
#include <string.h>

void remove_char_at_position(char str[], int pos) {
  int len = strlen(str);

  if (pos < 0 || pos >= len) {
    printf("Posição inválida!\n");
    return;
  }

  for (int i = pos; i < len - 1; i++) {
    str[i] = str[i + 1];
  }

  str[len - 1] = '\0';
}

int main() {
  char str[100];
  int remove_position;

  strcpy(str, "Exemplo de string"); 
  printf("String original: %s\n", str);

  printf("Posição em que o caractere deverá ser removido: ");
  scanf("%d", &remove_position);
  remove_char_at_position(str, remove_position);
  
  printf("Depois de remover o caractere: %s\n", str);

  return 0;
}
