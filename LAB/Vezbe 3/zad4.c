#include <stdio.h>

int main(){
	
	int i,n,a[50];
	float prosek;
	
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
		
	//trazenje prosecne vredosti
	prosek = 0;
	for (i=0; i<n; i++)
		prosek = prosek + a[i];
	
	prosek = prosek/n;
	printf("Prosecna vrednost = %f\n",prosek);
	
	//trazenje i ispis elemenata manji od prosecne vrednosti
	printf("Elementi manji od prosecne vrednosti:\n");
	
	for (i=0; i<n; i++)
		if (a[i] < prosek)
			printf("%d ",a[i]);
	
	return 0;
}
