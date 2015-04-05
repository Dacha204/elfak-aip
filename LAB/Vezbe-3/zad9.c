#include <stdio.h>

int main(){
		
	int a[100],j, i,x,k,m,n;
	
	//unos niza A
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	//unos parametara m
	scanf("%d",&m);
	//m puta radi:
	for (j=1; j<=m; j++){

		//unesi poziciju index (k) i broj (x) za umetanje
		scanf("%d %d",&k,&x);
		k--; //indexi u C krecu od 0, korisniku od 1 (pretpostavka, nije u zadatku definisano)
		if (k == n){ //ako je index na kraju niza samo dodamo taj broj i povecamo velicinu niza za 1
			a[k] = x;
			n++;
		}else { //ako nije pomerimo sve clanove od kraja do k-tog za jedno mesto udesno
			for (i = n-1; i>=k; i--)
				a[i+1]=a[i];
			
			a[k] = x; //ubacimo na k-tu poziciju uneti broj x
			n++;	 //povecamo velicinu  niza za 1
		}
		
		//stampanje niza
		for (i=0; i<n; i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	return 0;
}
