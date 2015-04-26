#include <stdio.h>
#include <math.h>

main(){
	
	double x,e, ex, en, exp_old, exp_new;
	int n = 1;
	
	scanf("%lf %lf",&x,&e);
	
	exp_old = exp_new = ex = en = n = 1;
	
	do {
		ex = ex * x;
		en = en * n;
		exp_old = exp_new;
		exp_new = exp_new + ex/en;
		n++;		
	} while( fabsf(exp_new - exp_old) > e);
	
	printf("%15.10lf",exp_new);
}


/* fabsf <=> abs 
 * vidi prethodni zadatak
 */
