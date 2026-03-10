/*Write a program that makes tabs and backspaces visible in the output: replace each tab character in the input with the sequence > followed by -, and replace each backspace character in the input with the sequence < followed by -. All other characters should be copied unchanged*/
#include <stdio.h>
int main(){
	int c;
	while ((c = getchar()) != EOF){
		if (c == '\t'){
			putchar('>');
			putchar('-');
		}
		else if (c == '\b'){
			putchar('<');
			putchar('-');
		}
		else {
			putchar(c);
		}
	}
	return 0;
}
