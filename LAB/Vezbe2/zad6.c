#include <stdio.h>

int main(){
	
	int n,i,k;
	double f1,f2;
	
	scanf("%d",&n);
	
	for (k = 2; k<=n; k++){
		f1 = f2 = 1;
		for (i=2; i <= k; f1 *= i++); //faktorijel od k
		for (i=2; i <= k*k; f2 *= i++); //faktorijel od k*k 
		printf("f(%d)=%.0lf\tf(%d)=%.0lf\n",k,f1,k*k,f2);
	}
	return 0;
}
