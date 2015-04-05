#include <stdio.h>

int main(){
	
	int a[50];
	int i,v,zbir,n,suma;
	
	//unos niza
	scanf("%d",&v);
	zbir = 0; n=0;
	while (zbir <= v){
		scanf("%d",&a[n]);
		zbir = zbir + a[n];
		n++;		
	}
	
	printf("Uneto %d elemenata:\n",n);
	suma = 0;
	//stampa i sumira elemente niza u jednom prolazu (moze i posebno kroz 2 prolaza)
	for (i=0; i<n; i++){
		printf("%d ",a[i]);
		suma = suma + a[i];
	}
	
	printf("\nSuma elemenata = %d\nProsecna vrednost = %.2f\n",suma,(suma*1.0)/n);
	//mnozimo sa 1.0 da bi rezultat bio float. suma/n je celobrojno deljenje (int sum, int n)	
	
	return 0;
}
