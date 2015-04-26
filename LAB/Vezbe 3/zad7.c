#include <stdio.h>

int main(){
	
	int a[50],b[50],c[100];
	int i,na,nb,nc;
	int promena,pom;
	
	//unos niza A
	printf("Niz A\nn=");
	scanf("%d",&na);
	printf("elementi:\n");
	for (i=0; i<na; i++)
		scanf("%d",&a[i]);
	
	//unos niza B
	printf("Niz B\nn=");
	scanf("%d",&nb);
	printf("elementi: \n");
	for (i=0; i<nb; i++)
		scanf("%d",&b[i]);
	
	//formiranje niza C = A + B	
	nc = na+nb;
	for(i=0; i<na; i++)
		c[i]=a[i];
	
	for (i=na; i<nc; i++)
		c[i]=b[i-na];
	
	//sortiranje niza (bubble-sort)	
	do{
		promena = 0;
		for (i=0; i<nc-1; i++)
			if (c[i] > c[i+1]){
				//zamena mesta
				pom = c[i];
				c[i] = c[i+1];
				c[i+1] = pom;
				promena = 1;
			}		
	}while (promena == 1);
	
	//stampanje niza C
	printf("\n");
	for (i=0; i<nc; i++)
		printf("%d ", c[i]);
	
	return 0;
	
}
