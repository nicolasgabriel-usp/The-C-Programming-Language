#include <stdio.h>

int main(){
    int n, i, j, maior;
    int num[100];

    printf("Quantos numeros no array (ate 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("numero na posicao %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    maior = num[0];

    for (j = 1; j < n; j++){
        if (num[j] > maior){
            maior = num[j];
        }
    }

    printf("O maior numero da lista é: %d\n", maior);

    return 0;
}
