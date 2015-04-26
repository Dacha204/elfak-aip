#include <stdio.h>
#include <math.h>

main(){
	
	// xp - prethodno; xn - novo
	float xp, xn, e;
	
	scanf("%f",&e);
	xp = xn = 0;
	do{
		xp = xn;
		xn = (3.0*powf(xp,4)+4.0*powf(xp,2)-4.0)/(4*powf(xp,3)+8*xp-9);
		
	} while (fabsf(xn - xp) >= e);
	
	printf("%f",xn);
	

}


/* powf <=> pow. 
 * powf funkcija uzima za parametar float i vraca rezultat float 
 * pow funckija uzima za parametar double i vraca rezultat double
 * 
 * fabs <=> abs
 * fabsf funkcija uzima za parametar float i vraca rezultat float
 * abs funkcija uzima za parametar integer i vraca rezultat integer

 */
  
