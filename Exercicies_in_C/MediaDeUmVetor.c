#include <stdio.h>

int main(){

	int num[10], n, i, media, soma;

	printf("Quantos numeros no vetor (de 0 até 100): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		printf("numero na posicao %d: ", i+1);
		scanf("%d", &num[i]);
		soma += num[i];
	}

	media = (soma/n);

	printf("Media: %d", media);
	return 0;
}
