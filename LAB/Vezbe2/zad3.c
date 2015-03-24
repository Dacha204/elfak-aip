#include <stdio.h>
#include <math.h>

 main(void){
	
	int prost, i, t, s, n;
	
	scanf("%d", &n);
	
	for (i=100; i<=n; i++){
		
		t = i;
		
		//sumira cifre
		s = 0;
		while (t > 0){
			s = s + (t % 10); // t%10 'izvlaci' poslednju cifru
			t = t / 10;		  // t/10 odseca poslednju cifru
		}
		  
		
		//ispituje da li je suma prost broj za sumu != 1 (1 nije prost po def);
		
		if (s != 1){
			//proglasimo ga za prost
			prost = 1;
			
			//ispitujemo dal' je deljiv da nekim brojem izmedju 2 i sqrt(taj broj)
			// moze i do (taj broj - 1) ili (taj broj / 2)
			// (optimizacija: prost &&) prekida petlju cim nadjemo neki broj koji deli taj broj
			for (t=2; prost && t<=sqrt(s); t++)
				if (s%t == 0)
					prost = 0;		
			
			//ako je prost - stampamo
			if (prost)
				printf("%d ",i);
		}
	}

}
