#include <stdio.h>

void delioci (int x, int n[],int *duz){
	
	int k = 0, i;
	
	for (i = 1; i<=x; i++)
		if (x % i == 0){
			n[k] = i;
			k++;
		}
	*duz = k;
}


int main(){

	int rez[100],r,b,i;
	
	scanf("%d",&b);
	delioci(b,rez,&r);
	for (i=0; i<r; i++)
		printf("%d ",rez[i]);
		
	return 0;
}
