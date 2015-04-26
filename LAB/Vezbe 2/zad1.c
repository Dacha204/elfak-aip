#include <stdio.h>

main(){

	int n, i, k;
	int prost;

	scanf("%d",&n);
	
	//ispitujemo redom od 2 do n (1 nije prost broj po def)
	for (i = 2; i <= n; i++){ 		
		
		//proglasimo trenutni testirani broj za prost
		prost = 1;					

		//testiramo dal' je trenutni broj deljiv sa nekim brojem izmedju 2 i tog broja
		//prekidamo petlju cim pronadjemo prvi broj koji deli testirani broj (optimizacija)
		for (k = 2; k <= i/2 && prost; k++)
			if (i%k == 0)
				prost = 0;
		/* umesto for moze i
		 k = 2;
 		 while (k <= i/2 && prost){
	 	 	if (i%k == 0)
				prost = 0;
			k++;
		}
		*/
		//ako je testirani broj prost - stampamo
		if (prost)
				printf("%d ",i);

	}

}

