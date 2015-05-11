#include <stdio.h>

void minimax(int niz[], int duzina, int *min, int *max){
	
	int imin, imax,i;
	
	imin = imax = 0;
	
	for (i=0; i<duzina; i++)
		if(niz[i] > niz[imax])
			imax = i;
		else if (niz[i] < niz[imin])
			imin = i;
	
	*min = imin;
	*max = imax;
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
