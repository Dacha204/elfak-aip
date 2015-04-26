#include <stdio.h>

int main(){
	
	int n,i,k,m = 1;
	double f1,f2;
	f1 = f2 = 1;
	scanf("%d",&n);
	
	for (k = 2; k<=n; k++){
		f1 *= k;
		for (i=m+1; i <= k*k; f2 *= i++, m++); 
		printf("f(%d)=%.0lf\tf(%d)=%.0lf\n",k,f1,k*k,f2);
	}
	return 0;
}

//pamti se vrednost od kog broja je izracunat u f2, zatim se racuna novi faktorijel u f2 od tog broja do sledeceg trazenog
//npr. u f2 je faktorijel od 5. potrebno je za fakt 25. umesto ponovno racunanje fakt od 5 (pa do 25) nastavlja
//se direktno racunanje od 5 do 25
