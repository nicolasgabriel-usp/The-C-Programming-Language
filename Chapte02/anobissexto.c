#include <stdio.h>

int main(){
	int ano;
	printf("Ano: ");
	scanf("%d", &ano);

	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
		printf("É bissexto\n");
	} else {
		printf("Nao é bissexto\n");
	}

	return 0;
}
