#include <stdio.h>

int main(){
	
	int a[50],i,n,max,select;
	
	//unos niza
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	//pocetna selekcija je 1 (samo prvi elemenat niza je u selekciji) 	
	select = 1; max = 1;
	//od prvog do pretposlednjeg elementa
	for (i=0; i < n-1; i++)
		//ako je naredni element veci od trenutnog ukljuci ga u selekciju (sekvenca se prosiruje)
		if (a[i+1]>=a[i]){
			select++;
			//ako je selekcija do sad najduza zapamti je
			if (select > max)
				max = select;
		}else //ako ne ispunjava uslov, resetuj selekciju (tj. pocinje nova sekvenca)
			select = 1;

	printf("max = %d",max);
	
	
	return 0;
}
