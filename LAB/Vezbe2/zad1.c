#include <stdio.h>

int main(void){

	int n, i, k;
	int prost;

	scanf("%d",&n);
	
	for (i = 2; i <= n; i++){
		prost = 1;

		for (k = 2; k <= i/2 && prost; k++)
			if (i%k == 0)
				prost = 0;
		
		if (prost)
				printf("%d ",i);

	}
	
	
	return 0;
}
