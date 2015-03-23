#include <stdio.h>


float absc(float x){
	if (x < 0)
		return -x;
	
	return x;
}

int main(){
	
	float xp, xn, e;
	
	scanf("%f",&e);
	xp = xn = 0;
	do{
		xp = xn;
		xn = (3.0*(xp*xp*xp*xp)+4.0*(xp*xp)-4.0)/(4*(xp*xp*xp)+8*xp-9);
		
	} while (absc(xn - xp) >= e);
	
	printf("%f",xn);
	
	return 0;
}
