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
	
    	for (i=0;i<n-1;i++){
        	//k puta rotiraj
        	//>>granice: od poslednjeg do i+1 clana vrste
        	//(i+1) zato sto u svakoj novoj vrsti niz koji rotiramo
		//se smanjuje za jedno polje sa leve strane
        	for (b=1; b<=k; b++){
            		pom = a[i][m-1];
            		for (z=m-1; z>i+1; z--)
                		a[i][z]= a[i][z-1];
            	a[i][i+1] = pom;
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
