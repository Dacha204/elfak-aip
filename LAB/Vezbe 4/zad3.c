#include <stdio.h>

int main(){

	int a[10][10], n, i,j,m, min_i,min_j, max_i, max_j;

	//unos matrice A
	printf("N = ");
	scanf("%d",&n);
		
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);

	//stampanje matrice pre transformacije
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	/*proglasimo 2 elementa da je najveci/najmanji i
	 *zapamtimo njegove koordinate.
	 * 
	 * >>mozemo i jedan te isti element da koristimo
	 *jer sigurno cemo naci broj koji je veci ili manji od njega
	 *stoga nece ostati istovremeno min i max element 
	 *(osim ako svi elementi matrice nisu isti.) confused?:S xD
	 */
	 
	max_i = 0;
	max_j = 0;
	
	min_i = 0;
	min_j = 1;
	
	//redom kroz matricu
	for (i=0; i<n; i++)
		for (j=0; j<n; j++){
			//element veci od trenutno max elementa?
			if (a[i][j] > a[max_i][max_j]){
				//pamti koordinate
				max_i = i;
				max_j = j;
			}
			//element manji od trenutno min elementa?
			else if (a[i][j] < a[min_i][min_j]){
				//pamti koordinate
				min_i = i;
				min_j = j;
			}
		}
		
	//menjanje mesta vrstama
	for (j=0; j<n; j++){
		m = a[min_i][j];
		a[min_i][j] = a[max_i][j];
		a[max_i][j] = m;
	}
	
	//stampanje matrice nakon transformacije
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	

	return 0;
}
