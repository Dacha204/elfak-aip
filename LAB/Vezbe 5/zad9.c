#include <stdio.h>

float Aps(float x){
	
	if (x<0)
		return -x;
	
	return x;
}

float expp(float x, float E){
	
	float ex, en, exp_old, exp_new;
	int n = 1;
		
	exp_old = exp_new = ex = en = n = 1;
	
	do {
		ex = ex * x;
		en = en * n;
		exp_old = exp_new;
		exp_new = exp_new + ex/en;
		n++;		
	} while( Aps(exp_new - exp_old) > E);
	
	return exp_new;
}



int main(){

	float x,E;
	scanf("%f %f",&x,&E);
	printf("rez= %f",expp(x,E));

	return 0;
}
