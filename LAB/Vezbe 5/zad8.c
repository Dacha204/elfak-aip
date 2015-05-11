#include <stdio.h>
#define SIZE 10

int SumSDiag(int a[SIZE][SIZE],int n){
	
	int sum = 0, j,i;
	
	for (i=0; i<n; i++)
		for(j=n-i; j<n; j++)
			sum += a[i][j];
	
	return sum;
}


int main(){

	int b[SIZE][SIZE],c[SIZE][SIZE], i,j,n;
	printf("n=");
	scanf("%d",&n);
	printf("B:\n");
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&b[i][j]);
	printf("C:\n");
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&c[i][j]);
		
	
		
	if (SumSDiag(b,n) > SumSDiag(c,n)){
		for (i=0; i<n; i++){
			for (j=0; j<n; j++)
				printf("%d ",b[i][j]);
			printf("\n");
		}
	}else{
		for (i=0; i<n; i++){
			for (j=0; j<n; j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}
	}
	

	return 0;
}
