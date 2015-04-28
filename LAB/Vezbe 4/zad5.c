#include <stdio.h>

int main(){

	int a[10][10],n,i,j,sum,k,sumk,m; 
	//sum - pomocna; k - kolona koju treba prikazati; sumk - suma kolone k;
		
	//unos matrice
	printf("N = ");
	scanf("%d",&n);
		
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);

//inicijalizacija
	//proglasimo da prva kolona ima najmanju sumu i nadjemo tu sumu
	k = 0;
	sumk = 0; //reset
	for (m=0; m<n; m++)
		sumk += a[m][0];
		
	//redom kroz kolone pocevsi od druge (za prvu smo vec racunali)
	for (j=1; j<n; j++){
		sum = 0; //reset
		//redom kroz elemente kolone
		for (m=0; m<n; m++)
			sum += a[j][m];
			
		//suma kolone najmanja do sad?
		if (sum < sumk){
			//zapamti kolonu i njenu sumu
			sumk = sum;
			k = j;
		}
	}
	
	//stampanje matrice A
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	//stampanje indexa pronadjene kolone
	printf("\n%d\n\n",k);
	
	//stampanje kolone
	for (i=0; i<n; i++)
		printf("%d\n",a[i][k]);
		
	
	
	
	return 0;
}
