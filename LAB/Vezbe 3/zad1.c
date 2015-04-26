#include <stdio.h>

int main(){
	
	int a[100];
	int n, i, k, sel;
	
	//unos niza od n elemenata
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);
	
	//trazi poziciju prve nule u nizu	
	k = 0;
	while (k < n && a[k]!=0)
		k++;
	
	//broj koliko nula ima u nizu (selektuje nule)
	// izvsava jedino ako ima uopste nula u nizu (pozicija k bi bila van niza)

	if (k < n){
		
		sel = 1; //prva nula je selektovana-prebrojana
		
		//sve dok index koji proverava (k+sel) nije van niza i vrednost a[k+sel] = 0
		//povecavaj selekciju za 1 (tj prebroji i tu nulu)		
		while (k+sel < n && a[k+sel] == 0 )
			sel++;
		
		sel--; //cuvamo jednu nulu tj, selekiciju koju cemo obrisati smanjujemo za 1 nulu
	
		//brisanje selekcije (nule) - pocevsi od naredne nule od prve nule koju smo nasli
		//u duzini selekcije (vidi zad 2.41(zbirka)
		//radi jedino ako je duzina selekcije za brisanje > 0 (ima elemenata za brisanje)
		
		if (sel > 0){
			for (i = k+1; i <= n-sel-1; i++)
				a[i] = a[i+sel];
		
			n = n - sel; //smanjuje brojac velicine niza za broj obrisanih elemenata
		}	
	}
	
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	
	return 0;
}

