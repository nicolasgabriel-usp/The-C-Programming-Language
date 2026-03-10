#include <stdio.h>
#define SIM 1
#define NAO 0
int main(){
	int c, nl, np, nc, empalavra;
	empalavra = NAO;
	nl = np = nc = 0;
	while ((c = getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t'){
			empalavra = NAO;
		}
		else if(empalavra == NAO){
			empalavra = SIM;
			++np;
		}
	}
	printf("%d %d %d\n", nl, np, nc);
	return 0;
}
