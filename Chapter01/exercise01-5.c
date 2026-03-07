#include <stdio.h>
int main(){
	int inicio, fim, decr;
	float fahr, celsius;

	inicio = 300;
	fim = 0;
	decr = -20;

	fahr = inicio;
	while (fahr >= fim) {
		celsius = (.50/9.0) * (fahr - 32);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + decr;
	}
	return 0;
}
