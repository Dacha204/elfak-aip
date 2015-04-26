#include <stdio.h>

main(){
	
	// p - broj pronadjenih koji ispunjavaju kriterijum
	// fpp,fp,fn - fib. predpredhodni,predhodni, novi clan fib. niza
	// s - suma
	
	int n,p;
	unsigned long fpp, fp, fn, s;
	
	fpp = fp = 1; //pocetni clanovi fib. niza
	s = 0;
	p = 0;
	scanf("%d", &n);
	
	//sve dok ne nadjemo dovoljan broj clanova koji ispunjavaju uslov
	while (p < n){
		
		//novi clan - zbir prethodna 2
		fn = fpp + fp;
		
		//da li je novi clan paran broj
		if (fn % 2 == 0){
			s = s + fn; 	//sumiramo ga			
			p++; 			//povecavamo brojac pronadjenih clanova
		}
		
		//priprema za pronalaz novog clana (u novom ciklusu)
		fpp = fp; 
		fp = fn;	
	}
	
	//stampamo sumu
	printf("%lu",s);


}
