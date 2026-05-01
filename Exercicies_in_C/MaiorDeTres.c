#include <stdio.h>

int main(){
	int bigger, num1, num2, num3;

	printf("number 01: ");
	scanf("%d", &num1);

	printf("number 02: ");
	scanf("%d", &num2);

	printf("number 03: ");
	scanf("%d", &num3);

	if (num1 >= num2 && num1 >= num3){
		bigger = num1;
	}
	else if (num2 >= num1 && num2 >= num3){
		bigger = num2;
	}
	else if (num3 >= num1 && num3 >= num2){
		bigger = num3;
	}

	printf("The bigger number is %d\n", bigger);

	return 0;
}
