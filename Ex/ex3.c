// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

int main() {
    int max_num;
    printf("Número máximo ímpar: ");
    scanf("%d", &max_num);
    
    if (max_num % 2 == 0) {
        printf("Número deve ser ímpar.\n");
        return 1;
    }
    
    for (int i = 1; i <= max_num; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int j = i; j <= max_num; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}