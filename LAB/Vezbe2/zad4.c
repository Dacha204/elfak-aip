#include <stdio.h>

main(){
	
	int s,k,i,t;
	
	scanf("%d", &k);
	
	//ispitujemo redom brojeve od 100 do 999
	for (i = 100; i<1000; i++)
		
		//deljiv sa k? ako nije testiramo naredni
		if (i%k == 0){
			
			//kopiramo vrednost trenutnog broja i u priveremenu promenljivu
			//jer naredni postupak unistava vrednost promenljive cije cifre sumiramo
			t = i;
			
			//sumira cifre (vidi prethodne zadatke)
			s = 0;
			while (t > 0){
				s = s + (t % 10);
				t = t / 10;
			}
			
			//suma cifara == 17?
			if (s == 17)
				printf("%d\n",i);
		}
	
	

}
