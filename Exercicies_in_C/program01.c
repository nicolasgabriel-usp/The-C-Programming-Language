#include <stdio.h>

int main(){
	char s[100];
	int i, c;

	for (i = 0; i < 99 && (c = getchar()) != '\n' && c != EOF; ++i){
		s[i] = c;
	}
	s[i] = '\0';

	printf("Voce digitou: %s\n", s);

	return 0;
}
