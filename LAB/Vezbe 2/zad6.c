#include <stdio.h>

 main(){
	
	int n,i,k;
	double f1,f2; //moze int, long, float - double najveci opseg brojeva
	
	scanf("%d",&n);
	
	for (k = 2; k<=n; k++){
		f1 = f2 = 1;
		
		//faktorijel od k
		for (i=2; i <= k; i++)
			f1 = f1 * i;
		
		//faktorijel od k*k
		for (i=2; i <= k*k; i++)
			f2 = f2 * i; 
			 
		printf("f(%d)=%.0lf\tf(%d)=%.0lf\n",k,f1,k*k,f2);
	}

}
