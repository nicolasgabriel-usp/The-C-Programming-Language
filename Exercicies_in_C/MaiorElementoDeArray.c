#include <stdio.h>

int main(){
	int n, i;
	int num[100];

	printf("Quantos numeros no array (ate 100): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		printf("numero na posicao %d: ", i+1);
		scanf("%d", &num[i]);
	}

	return 0;
}
