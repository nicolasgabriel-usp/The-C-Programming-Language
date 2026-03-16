
#include <stdio.h>

int main() {
    // --- Parte 1: vetor 1D ---
    int v[5];
    int c = 10;

    printf("Vetor 1D:\n");
    for (int i = 0; i < 5; i++) {
        v[i] = c;             // inicializa o vetor
        printf("v[%d] = %d\n", i, v[i]);
        c = c + 10;
    }

    // --- Parte 2: arranjo 3D ---
    int arr[3][3][3];
    int k = 1;

    printf("\nArranjo 3D:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int l = 0; l < 3; l++) {
                arr[i][j][l] = k++; // inicializa o arranjo
                printf("%d ", arr[i][j][l]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
