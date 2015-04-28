#include <stdio.h>

int main(){

	int n, a[10][10], c[10],l,i,j;
	int promena,pom;
	
	//unos matrice
	scanf("%d",&n);	
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
		
	//stampanje matrice pre obrade
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	//kopiranje sporedne diag u c niz
	l = 0; //duzina c niza;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i+j == n-1){
				c[l] = a[i][j];
				l++;
			}
		}
	}
		
	//sortiranje c niza (bubble-sort)
	do{
		promena = 0;
		for (i=0; i<l-1; i++)
			if (c[i] < c[i+1]){
				//zamena mesta
				pom = c[i];
				c[i] = c[i+1];
				c[i+1] = pom;
				promena = 1;
			}		
	}while (promena);

	//vracanje natrag c niza u diag.
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i+j == n-1){
				a[i][j] = c[l];
				l--;
			}
		}
	}

	//stampanje niza
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	return 0;
}
