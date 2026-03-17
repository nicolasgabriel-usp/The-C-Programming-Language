#include <stdio.h>

#define MAX_VETOR 100
#define MAX_ARR 10

// --- Funções para vetor 1D ---
void inicializaVetor1D(int v[], int tamanho, int inicio, int incremento) {
    for (int i = 0; i < tamanho; i++)
        v[i] = inicio + i * incremento;
}

void imprimeVetor1D(int v[], int tamanho) {
    printf("\nVetor 1D:\n");
    for (int i = 0; i < tamanho; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

int somaVetor(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        soma += v[i];
    return soma;
}

int minimoVetor(int v[], int tamanho) {
    int min = v[0];
    for (int i = 1; i < tamanho; i++)
        if (v[i] < min) min = v[i];
    return min;
}

int maximoVetor(int v[], int tamanho) {
    int max = v[0];
    for (int i = 1; i < tamanho; i++)
        if (v[i] > max) max = v[i];
    return max;
}

int buscaVetor(int v[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++)
        if (v[i] == valor) return i;
    return -1;
}

// --- Funções para arranjo 3D ---
void inicializaArranjo3D(int arr[MAX_ARR][MAX_ARR][MAX_ARR], int dimX, int dimY, int dimZ) {
    int k = 1;
    for (int i = 0; i < dimX; i++)
        for (int j = 0; j < dimY; j++)
            for (int l = 0; l < dimZ; l++)
                arr[i][j][l] = k++;
}

void imprimeArranjo3D(int arr[MAX_ARR][MAX_ARR][MAX_ARR], int dimX, int dimY, int dimZ) {
    printf("\nArranjo 3D:\n");
    for (int i = 0; i < dimX; i++) {
        printf("Camada %d:\n", i);
        for (int j = 0; j < dimY; j++) {
            for (int l = 0; l < dimZ; l++)
                printf("arr[%d][%d][%d] = %3d  ", i, j, l, arr[i][j][l]);
            printf("\n");
        }
        printf("\n");
    }
}

int somaArranjo3D(int arr[MAX_ARR][MAX_ARR][MAX_ARR], int dimX, int dimY, int dimZ) {
    int soma = 0;
    for (int i = 0; i < dimX; i++)
        for (int j = 0; j < dimY; j++)
            for (int l = 0; l < dimZ; l++)
                soma += arr[i][j][l];
    return soma;
}

int buscaArranjo3D(int arr[MAX_ARR][MAX_ARR][MAX_ARR], int dimX, int dimY, int dimZ, int valor, int *x, int *y, int *z) {
    for (int i = 0; i < dimX; i++)
        for (int j = 0; j < dimY; j++)
            for (int l = 0; l < dimZ; l++)
                if (arr[i][j][l] == valor) {
                    *x = i; *y = j; *z = l;
                    return 1;
                }
    return 0;
}

int main() {
    int tamanho, inicio, incremento;
    printf("Digite o tamanho do vetor 1D (max %d): ", MAX_VETOR);
    scanf("%d", &tamanho);
    if (tamanho > MAX_VETOR) tamanho = MAX_VETOR;

    printf("Digite valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite incremento: ");
    scanf("%d", &incremento);

    int vetor[MAX_VETOR];
    inicializaVetor1D(vetor, tamanho, inicio, incremento);
    imprimeVetor1D(vetor, tamanho);

    printf("\nSoma: %d, Média: %.2f, Min: %d, Max: %d\n",
           somaVetor(vetor, tamanho),
           somaVetor(vetor, tamanho) / (float)tamanho,
           minimoVetor(vetor, tamanho),
           maximoVetor(vetor, tamanho));

    int valorBusca;
    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &valorBusca);
    int pos = buscaVetor(vetor, tamanho, valorBusca);
    if (pos != -1) printf("Valor %d encontrado na posição %d\n", valorBusca, pos);
    else printf("Valor %d não encontrado no vetor\n", valorBusca);

    // --- Arranjo 3D ---
    int dimX, dimY, dimZ;
    printf("\nDigite dimensões do arranjo 3D (max %d para cada): ", MAX_ARR);
    scanf("%d %d %d", &dimX, &dimY, &dimZ);
    if (dimX > MAX_ARR) dimX = MAX_ARR;
    if (dimY > MAX_ARR) dimY = MAX_ARR;
    if (dimZ > MAX_ARR) dimZ = MAX_ARR;

    int arr[MAX_ARR][MAX_ARR][MAX_ARR];
    inicializaArranjo3D(arr, dimX, dimY, dimZ);
    imprimeArranjo3D(arr, dimX, dimY, dimZ);

    printf("Soma de todos os elementos do arranjo: %d\n", somaArranjo3D(arr, dimX, dimY, dimZ));

    printf("Digite um valor para buscar no arranjo 3D: ");
    scanf("%d", &valorBusca);
    int x, y, z;
    if (buscaArranjo3D(arr, dimX, dimY, dimZ, valorBusca, &x, &y, &z))
        printf("Valor %d encontrado em arr[%d][%d][%d]\n", valorBusca, x, y, z);
    else
        printf("Valor %d não encontrado no arranjo\n", valorBusca);

    return 0;
}
