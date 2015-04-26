#include <stdio.h>

int main(){
	
	int a[50],i,n,m,j,k;
	
	//unos niza A
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	//unos parametara m
	scanf("%d",&m);
	
	//m puta radi:
	for (j=1; j<=m; j++){

		//unesi poziciju (index k) za brisanje
		scanf("%d",&k);
		k--; //indexi u C krecu od 0, korisniku od 1 (pretpostavka, nije u zadatku definisano)
		if (k == n){ //ako je index na kraju niza samo smanjimo velicinu niza za 1
			n--;
		}else { //ako nije pomerimo sve clanove od k-tog za jedno mesto ulevo
			for (i = k; i<n-1; i++)
				a[i]=a[i+1];
			n--;	 //smanjimo velicinu  niza za 1
		}
		
		//stampanje niza
		for (i=0; i<n; i++)
			printf("%d ",a[i]);
		printf("\n");
		
	}
	
	
	return 0;
}
