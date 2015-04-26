#include <stdio.h>
#include <math.h>

main(void){
	
	float y;
	int x,n;
	
	scanf("%d",&n);
	
	for (x=-n; x<=n; x++){
		if (x < 0)
			y = x*x;
		else if (x >= 1)
			y = sqrtf(x);
		else
			y = x;
		
		printf("%f\n",y);
	
	}
}

