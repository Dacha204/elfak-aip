#include <stdio.h>

int main(void){
	
	int s,k,i,t;
	
	scanf("%d", &k);
	
	for (i = 100; i<1000; i++)
		if (i%k == 0){
			t = i;
			
			//sumira cifre
			for (s=0; t; t/=10)
				s += t%10;
			
			if (s == 17)
				printf("%d\n",i);
		}
	
	
	return 0;
}
