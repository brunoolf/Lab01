// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_to_lower(char* str) {
  while (*str) {
    *str = tolower(*str);
    str++;
  }
}

void find_all_character_positions(const char* str, char target) {
  int position = 0;

  while (*str) {
    if (*str == target) {
      printf("Encontrado '%c' na posição %d\n", target, position + 1);
    }
    
    str++;
    position++;
  }
}

int main() {
  char input_string[100];
  char target_char;

  printf("String: ");
  scanf("%s", input_string);

  printf("Caractere a ser encontrado: ");
  scanf(" %c", &target_char);

  str_to_lower(input_string);
  
  find_all_character_positions(input_string, tolower(target_char));

  return 0;
}
