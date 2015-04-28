#include <stdio.h>

int main(){

	int n,i,j,r[10][10];
//	>> incijalizacija matrice prilikom deklaracije. Vidi 'info' na kraju fajla <<
	int a[4][4]={ { 1, 2, 3, 4},
				  { 5, 6, 7, 8},
				  { 9,10,11,12},
				  {13,14,15,16}
				};
	n = 4;
// >> kraj inicijalizacije matrice
	
	int at[10][10];	

			
	//formiranje A transp. (A[T]) na osnovu A matrice
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			at[j][i]=a[i][j];
			
	//formiranje matrice R = A + 2A[T]
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			r[i][j] = a[i][j] + 2*at[i][j];
				
	
	printf("\n");
	
	//stampanje A matrice
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
	
	//stampanje A[T] matrice
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",at[i][j]);
		printf("\n");
	}
	printf("\n");
	
	//stampanje R matrice: R=A+2A[T]
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",r[i][j]);
		printf("\n");
	}
	
	

	return 0;
}

/* << INFO >>
 * 
 * Kada bi omogucili da korisnik sam unese velicinu i elemente matrice
 * gornju sekciju bi zamenili sa
 * 
 * int a[10][10];
	
	scanf("%d",&n);
	
	//unos matrice A
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
 *
 */
