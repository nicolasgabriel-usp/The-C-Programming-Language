#include <stdio.h>

int main(){
	int n, i, produt = 1;

	printf("Numero: ");
	scanf("%d", &n);

	for (i = 1; i < n; i++){
		produt = produt * i;
	}

	printf("O fatorial de %d é: %d", n, produt);

	return 0;
}
