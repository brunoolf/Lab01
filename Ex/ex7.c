// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

struct Person {
    char name[100];
    int age;
    float weight;
    float height;
};

int main() {
    struct Person people[3];

    for (int i = 0; i < 3; i++) {
        printf("Dados da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", people[i].name);
        printf("Idade: ");
        scanf("%d", &people[i].age);
        printf("Peso: ");
        scanf("%f", &people[i].weight);
        printf("Altura: ");
        scanf("%f", &people[i].height);
        printf("\n");
    }

    printf("Dados das pessoas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", people[i].name);
        printf("Idade: %d\n", people[i].age);
        printf("Peso: %.2f kg\n", people[i].weight);
        printf("Altura: %.2f cm\n", people[i].height);
        printf("\n");
    }

    return 0;
}
