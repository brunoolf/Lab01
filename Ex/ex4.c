// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], nome2[100];

    printf("Primeiro nome: ");
    scanf("%s", nome);

    printf("Segundo nome: ");
    scanf("%s", nome2);

    int comparacao = strcmp(nome, nome2);

    if (comparacao < 0) {
        printf("%s\n%s\n", nome, nome2);
    } else if (comparacao > 0) {
        printf("%s\n%s\n", nome2, nome);
    } else {
        printf("Os nomes são iguais: %s\n", nome);
    }

    return 0;
}