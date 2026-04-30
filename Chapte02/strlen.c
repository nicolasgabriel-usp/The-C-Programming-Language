#include <stdio.h>
int strlen_custom(char s[]){
	int i = 0;

	while (s[i] != '\0'){
		++i;
	}

	return i;
}

int main(){
	char s[] = "Hello";
	int tamanho = strlen_custom(s);
	printf("Tamanho: %d\n", tamanho);
	return 0;
}
