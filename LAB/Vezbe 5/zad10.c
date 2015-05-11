#include <stdio.h>
#define SIZE 10

void Zameni(int *x, int *y){

	int pom;	

	pom = *x;
	*x = *y;
	*y = pom;
}

void Trans(int a[SIZE][SIZE], int n){
	
	int m,i;
	
	for (m=0; m<n-1; m++)
		for (i=m+1; i<n; i++)
			Zameni(&a[i][m], &a[m][i]);		
}

int main(){

	int i,j,n, a[SIZE][SIZE];
	
	scanf("%d",&n);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
			
	Trans(a,n);
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
		


	return 0;
}
