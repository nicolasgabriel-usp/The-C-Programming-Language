#include <stdio.h>

int main(){
	int n, soma = 0, i;

	printf("Numero: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++){
		soma = soma + i;
	}

	printf("Sum: %d\n", soma);

	return 0;
}
