#include <stdio.h>

int main(){
	
	int a[50],n,i,j,pom,k;
	
	//unos niza
	printf("n=");
	scanf("%d",&n);
	printf("elementi:");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	//unos vrednosti k	
	printf("k=");
	scanf("%d",&k);
	
	//ispis niza pre pomeranja
	printf("\nNiz pre pomeranja:\n");
	for (i=0; i<n;i++)
		printf("%d ", a[i]);
	
	//pomeranje niza
	//(k puta pomeramo elemente za jedno mesto ulevo) 	
	for(j=1; j<=k; j++){
		pom = a[0]; //pamtimo prvi element
		for (i=0; i <= n-2;i++) //pomeramo elemente ulevo //("i" ide do pretposlednjeg)
			a[i] = a[i+1];
		a[n-1] = pom; //poslednji element uzima vrednost prvog (sacuvanog)
	}	
	
	//stampanje modifikovanog niza
	printf("\nNiz posle pomeranja:\n");
	for (i=0; i<n;i++)
		printf("%d ", a[i]);
	
		
	return 0;
}
