#include <stdio.h>
#include <math.h>

int main(void){
	
	int prost, i, t, s, n;
	
	scanf("%d", &n);
	
	for (i=100; i<=n; i++){
		
		t = i;
		
		//sumira cifre
		for (s=0; t; t/=10)
			s += t%10;  
		
		//ispituje da li je suma prost broj za sumu != 1;
		if (s != 1){
			prost = 1;
			for (t=2; prost && t<=sqrt(s); t++)
				if (s%t == 0)
					prost = 0;		
		
			if (prost)
				printf("%d ",i);
		}
	}
	return 0;
}
