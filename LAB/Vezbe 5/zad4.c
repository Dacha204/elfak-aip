#include <stdio.h>

void minimax(int niz[], int duzina, int *min, int *max){
	
	int i;
	
	*min = *max = 0;
	
	for (i=0; i<duzina; i++)
		if(niz[i] > niz[*max])
			*max = i;
		else if (niz[i] < niz[*min])
			*min = i;
}


int main(){

	int a[100], max,min, i,n;
	
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
		
	minimax(a, n, &min, &max);

	printf("min=%d\nmax=%d\n",min,max);
	return 0;
}
