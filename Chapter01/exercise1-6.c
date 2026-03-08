/*program  that counts spaces, tabs, and newlines*/
#include <stdio.h>
int main(){
	int c;
	int sp=0, nl=0, tab=0;

	while ((c = getchar()) != EOF){
		if(c == ' '){
			++sp;
		}
		else if(c == '\t'){
			++tab;
		}
		else if(c == '\n'){
			++nl;
		}
	}
	printf("Spaces: %d\nTabulation: %d\nLines:%d\n", sp, tab, nl);
	return 0;
}
