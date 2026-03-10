/* write a program that copy the input on out, change each two or more space for only one */
#include <stdio.h>
int main(){
	int c;
	int space = 0;
	
	while ((c = getchar()) != EOF){
		if (c == ' '){
			if (space == 0){
				putchar(c);
				space = 1;
			}
		}
		else {
			putchar(c);
			space = 0;
		}
	}
	
	return 0;
}
