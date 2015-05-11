#include <stdio.h>

int prost(int A){
	
	//proglasimo ga za prost, proveravamo da li je deljiv
	//sa nekim brojem izmedju 2 i A/2 i ako jeste promenimo status
	//prost u 0 i prekidamo petlju
	int prost = 1, i=2;	
		
	while (i <= A/2 && prost){
		if (A%i == 0)
			prost = 0;
		i++;
	}
	
	return prost;
}
	
int main(){
	
	int n, br = 0, i, unos;
	
	printf("n=");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
		printf("Broj %d: ",i);
		scanf("%d",&unos);
		if (prost(unos))
			br++;
	}
	printf("\n\nKorisnik je uneo %d prostih brojeva.\n",br);

	return 0;
}
