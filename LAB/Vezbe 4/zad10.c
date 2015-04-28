#include <stdio.h>

int main(){

	int b[10],i,j,n,l;
//	>> incijalizacija matrice prilikom deklaracije. Vidi 'info' na kraju fajla <<
	int a[4][4]={ { 1, 2, 3, 4},
				  { 5, 6, 7, 8},
				  { 9,10,11,12},
				  {13,14,15,16}
				};
	n=4;
// >> kraj inicijalizacije matrice
	
	//stampanje matrice
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%2d ",a[i][j]);
		printf("\n");
		
	}
	printf("\n");
	
	//formiranje niza B
	l=4; //duzina niza B
	for (i=0; i<l; i++){
		b[i] = a[i][i] + a[n-1-i][i];
		printf("%d\n",b[i]);
	}
	

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
