#include <stdio.h>

int minusculo(int c){
	if (c >= 'A' && c <= 'Z'){
		return c + ('a' - 'A');
	}
	else{
		return c;
	}
}
int main(){
	int c;
	while ((c = getchar()) != EOF){
		putchar(minusculo(c));
	}
	return 0;
}

