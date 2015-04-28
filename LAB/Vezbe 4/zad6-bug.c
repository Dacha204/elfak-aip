#include <stdio.h>

int main(){

	int a[10][10], i,j,m,n,k,b,z,pom;

	//unos matrice
	printf("N,M = ");
	scanf("%d %d",&n,&m);
		
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			scanf("%d",&a[i][j]);
	
	//stampanje matrice
	for (i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}		
			
	//unos k
	scanf("%d",&k);
	
	//redom kroz vrste
	for (i=0; i<n-1; i++){
		//u svakoj novoj vrsti niz koji rotiramo
		//se smanjuje za jedno polje sa leve strane
		for (j=i+1; j<m; j++){
			//k puta rotiraj
			for (b=1; b<=k; b++){
				//rotiranje udesno
				pom = a[i][m-1];
				for (z=m-1; z>j; z--){ 
					a[i][z] = a[i][z-1];
				}
				a[i][j] = pom;
			}	
		}
		
	}
	
	//stampanje matrice
	for (i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}	

	return 0;
}
