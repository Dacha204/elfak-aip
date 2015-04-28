#include <stdio.h>

int main(){

	int m,n, i,j,pom;
//	>> incijalizacija matrice prilikom deklaracije. Vidi 'info' na kraju fajla <<
	int a[3][6] = { {1,2,3,4,5,6}, //random vrednosti, uzete iz primera zad.
					{1,2,3,5,7,9},
					{2,2,4,4,6,6},
				  };
	m = 3; n=6; 
// >> kraj inicijalizacije matrice
	
	for (i=0; i<m; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	printf("\n\n");
	
	for (j=0; j<n/2; j++)
		for (i=0; i<m; i++){
			pom = a[i][j];
			a[i][j]=a[i][n-1-j];
			a[i][n-1-j]=pom;
		}

	for (i=0; i<m; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	return 0;
}

/* << INFO >>
 * 
 * Kada bi omogucili da korisnik sam unese velicinu i elemente matrice
 * gornju sekciju bi zamenili sa
 * 
 *  int a[10][10];
	scanf("%d %d",&m,&n);
	
	printf("Unos matrice %dx%d\n",m,n);
	for (i=0; i<m; i++){
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	}
 *
 */
