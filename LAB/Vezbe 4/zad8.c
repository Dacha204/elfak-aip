#include <stdio.h>

int main(){

	int a[10][10], i,j,uredjena,m,n;
	
	//unos matrice
	scanf("%d %d",&n,&m);
	for (i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d",&a[i][j]);
	
	//stampanje matrice
	for (i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	//redom kroz vrste
	for (i=0; i<n; i++){
		//proglasimo da je vrsta uredjena
		uredjena = 1;
		//redom kroz elemente vrste
		for (j=0; j<m-1; j++)
			if (a[i][j]>a[i][j+1])
				uredjena = 0;
		
		if (uredjena)
			printf("%d ",i);
	}
	

	


	return 0;
}
