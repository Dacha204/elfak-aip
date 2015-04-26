#include <stdio.h>

int main(){
	
	int a[50], j, m, n,i, k, x;
	
	//unos niza A
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	//unos parametra m
	printf("m=");
	scanf("%d",&m);
	
	//m puta radi:
	for(j=1; j<=m; j++){
		
		//ucitaj broj koji treba umetnuti
		scanf("%d",&x);
		
		//trazenje pozicije gde treba umetnuti
		k=0;
		while (k<n && a[k]>x)
			k++;
		
		//ako je pozicija na kraju niza
		if (k == n){
			a[k] = x; //dodati broj x na poslednje mesto
			n++;	  //povecaj duzinu niza
		}
		else if (a[k]!=x){  //ako pozicija nije na kraju niza i ako na toj poziciji nije vec taj broj
			//pomeri sve clanove od poslednjeg mesta do k-te pozicije udesno za jedno mesto
			for (i=n-1; i>=k; i--)
					a[i+1]=a[i];			
				
			a[k]=x; //na k-tu poziciju upisi nov (uneti) broj
			n++;	//povecaj velicinu niza
		}
		//stampaj niz
		for (i=0; i<n; i++)
			printf("%d ",a[i]);
		printf("\n");
	}
		
	
	return 0;
}
