#include <stdio.h>

int main(){

	int n,i,j,sum,pr;
//	>> incijalizacija matrice prilikom deklaracije. Vidi 'info' na kraju fajla <<
	int a[4][4] = { {1,2,3,4}, //random vrednosti
					{3,5,1,5},
					{4,1,5,6},
					{2,5,3,2}, };
	n = 4;
// >> kraj inicijalizacije matrice

	//reset
	sum = 0;
	pr = 1;
	
	//obilazimo redom elemente matrice
	for (i=0; i<n; i++)
		for(j=0; j<n; j++){
			//element ispod glavne diag?
			if (i>j)
				sum += a[i][j];
			//element ispod sporedne diag?
			if (i+j > n-1 )
				pr *= a[i][j];
		}
	
	//stampanje matrice i rezultat
	printf("Matrica A\n");
	for (i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	printf("Suma = %d\nProizvod = %d",sum,pr);
	
	return 0;
}

/* << INFO >>
 * 
 * Kada bi omogucili da korisnik sam unese velicinu i elemente matrice
 * gornju sekciju bi zamenili sa
 * 
 * int a[10][10];
 * //Unos matrice
	printf("N= ");
	scanf("%d",&n);
	printf("Unos matrice:\n");
	for (i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
 *
 */
 
