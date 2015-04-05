#include <stdio.h>

int main(){

	int a[50];
	int i,n,pom;
	float prosek;
	char promena; //moze int
	
	//unos niza od n elemenata
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	//stampanje nesredjenog niza
	for (i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n"); //estetika
	
	//sortiranje niza (bubble-sort)	
	do{
		promena = 0;
		for (i=0; i<n-1; i++)
			if (a[i] < a[i+1]){
				//zamena mesta
				pom = a[i];
				a[i] = a[i+1];
				a[i+1] = pom;
				promena = 1;
			}		
	}while (promena == 1);
	
	//odredjivanje prosecne vrednosti (sumiramo sve elemente pa delimo sa n (u istu promenljivu)
	prosek = 0;
	for (i=0; i<n; i++)
		prosek += a[i];
	
	prosek = prosek / n;
	
	//stampanje sredjenog niza i prosek
	for (i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\nProsek=%.2f\n",prosek);
	
	return 0;
}
