#include <stdio.h>


void Stampa(int a[10][10], int m, int n){
	
	int i,j;
	for (i=0; i<m; i++){
		printf("|  ");
		for (j=0; j<n; j++)
			printf("%5d ",a[i][j]);
		printf("  |\n");
		
	}
	return;
}


int main(){

	int a[10][10];
	int i,j,m,n;
	
	scanf("%d%d",&m,&n);
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	
	Stampa(a,m,n);

	return 0;
}
