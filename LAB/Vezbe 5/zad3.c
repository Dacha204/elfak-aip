#include <stdio.h>

int bin2dec(int a[],int n){
	
	int i, dec = 0, mnozilac = 1;
	
	for (i=0; i<n; i++){
		dec += a[i] * mnozilac ;
		mnozilac *= 2;
	}
	
	return dec;
}

int main(){

	int a[32];
	int i,n;
	
	printf("duzina broja ");
	scanf("%d",&n);
	printf("binarne cifre: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	printf("%d", bin2dec(a,n));

	return 0;
}
