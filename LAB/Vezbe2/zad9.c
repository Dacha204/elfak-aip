#include <stdio.h>

double Abs(double x) //funkcija za absolutnu vrednost
{
	if (x < 0) 
		return -x;
	return x;
}

int main(void){
	
	double x,e, ex, en, exp_old, exp_new;
	int n = 1;
	scanf("%lf %lf",&x,&e);
	
	exp_old = exp_new = ex = en = n = 1;
	
	do {
		exp_old = exp_new;
		exp_new += (ex *= x)/(en *= n++);
	} while (Abs(exp_new - exp_old) > e);
	
	/*do {
		ex *= x;
		en *= n;
		exp_old = exp_new;
		exp_new += ex/en;
		n++;		
	} while( Abs(exp_new - exp_old) > e);
	*/
	printf("%15.10lf",exp_new);
	
	return 0;
}
