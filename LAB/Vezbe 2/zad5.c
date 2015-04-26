#include <stdio.h>

void main(){
	int sum, n, temp;
	
	scanf("%d",&n);
	
	//sumira cifre zadatog broja (vidi prethodne zadatke)
	sum = 0;
	temp = n; //kopira vrednost n u temp promenjlivu jer postupak ispod bi unistio vrednost u n
		  // dalji rad se vrsi nad promenljivom temp
	while (temp > 0){
		sum = sum + (temp % 10);
		temp = temp / 10;
	}
	printf("sum = %d\n", sum);
	
// -- binarno
	//stampa redom cifre koje pronadje
	
	printf("bin = ");	
	temp = n; 	
	while (temp > 0){
		printf("%d",temp % 2);  // --binarno - osnova je 2 | stampa poslednju cifru
		temp = temp / 2;		// krati poslednju cifru
	}

// -- octalno
	
	printf("\noct = ");
	temp = n; 
	while (temp > 0){
		printf("%d",temp % 8);  // --octalno - osnova je 8 | stampa poslednju cifru
		temp = temp / 8;	// krati poslednju cifru
	}
	
// -- heksadekadno (osnova 16)
	printf("\nhex = ");
	temp = n;
	while (temp > 0){
		switch (temp%16){ 		//ostatak moze bude i >9 
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
			default: printf("%d",temp%16);
		}  
		temp = temp / 16;		// krati poslednju cifru
	}

}
