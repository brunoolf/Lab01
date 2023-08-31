// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

int main() {
    int n;
    printf("Orem da matriz: ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    printf("Elementos da matriz");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    int min_row = -1;
    int min_sum = __INT_MAX__;
    
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matriz[i][j];
        }
        
        if (row_sum < min_sum) {
            min_sum = row_sum;
            min_row = i + 1;
        }
    }
    
    printf("Linha com menor soma: %d\n", min_row);
    
    return 0;
}