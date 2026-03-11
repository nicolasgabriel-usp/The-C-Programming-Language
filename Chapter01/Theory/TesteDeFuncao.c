#include <stdio.h>

/* funcao que eleva x a potencia n (n >= 0) */
int pot(int x, int n){
	int i, p = 1;
	for (i = 1; i <= n; ++1){
		p = p *x;
	}
	return p;
}
int main() {
	int i;
	for (i = 0; i < 10; ++i){
		printf(%d %d %d\n", i, pot(1, i), pot(-3, i));
	}
	return 0;
}
