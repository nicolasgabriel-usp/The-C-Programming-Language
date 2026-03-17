#include <stdio.h>

// Função para inicializar vetor 1D
void inicializaVetor1D(int v[], int tamanho, int inicio, int incremento) {
    for (int i = 0; i < tamanho; i++) {
        v[i] = inicio + i * incremento;
    }
}

// Função para imprimir vetor 1D
void imprimeVetor1D(int v[], int tamanho) {
    printf("Vetor 1D:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}

// Função para inicializar arranjo 3D
void inicializaArranjo3D(int arr[3][3][3]) {
    int k = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int l = 0; l < 3; l++)
                arr[i][j][l] = k++;
}

// Função para imprimir arranjo 3D
void imprimeArranjo3D(int arr[3][3][3]) {
    printf("\nArranjo 3D:\n");
    for (int i = 0; i < 3; i++) {
        printf("Camada %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int l = 0; l < 3; l++)
                printf("%3d ", arr[i][j][l]);
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int tamanho = 5, inicio, incremento;

    // --- Entrada do usuário ---
    printf("Digite o valor inicial do vetor 1D: ");
    scanf("%d", &inicio);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    int v[tamanho];
    inicializaVetor1D(v, tamanho, inicio, incremento);
    imprimeVetor1D(v, tamanho);

    int arr[3][3][3];
    inicializaArranjo3D(arr);
    imprimeArranjo3D(arr);

    return 0;
}
