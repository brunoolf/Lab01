// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

int main() {
    float N1, N2, N3, MEDIA;
    printf("Três notas do aluno: ");
    scanf("%f %f %f", &N1, &N2, &N3);
    
    printf("Média dos exercícios: ");
    scanf("%f", &MEDIA);
    
    float MA = (N1 + N2 * 2 + N3 * 3 + MEDIA) / 7.0;
    
    printf("Média de aproveitamento: %.2f\n", MA);
    
    if (MA >= 9.0) {
        printf("Conceito: A\n");
    } else if (MA >= 7.5) {
        printf("Conceito: B\n");
    } else if (MA >= 6.0) {
        printf("Conceito: C\n");
    } else if (MA >= 4.0) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }
    
    return 0;
}