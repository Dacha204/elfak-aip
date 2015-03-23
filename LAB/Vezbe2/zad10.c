#include <stdio.h>

int main(void){

	float A,B;
	char op;
	
	scanf("%f %c %f", &A, &op, &B);
	
	switch (op){
		case '+': printf("%f",A+B); break;
		case '-': printf("%f",A-B); break;
		case '/': printf("%f",A/B); break;
		case '*': printf("%f",A*B); break;
		default: printf("Error");
	}

	
	return 0;
}
