#include <stdio.h>


int main(void){
	
	int sum = 0, n, temp;
	scanf("%d",&n);
	
	for (temp = n; temp; temp/=10)
		sum += temp%10;
	
	printf("sum = %d\n",sum);
	
	printf("bin = ");
	for (temp = n; temp; temp/=2){
		printf("%d",temp%2);	
	}
	
	printf("\noct = ");
	for (temp = n; temp; temp/=8){
		printf("%d",temp%8);
	}
	
	printf("\nhex = ");
	for (temp = n; temp; temp/=16){
		switch (temp%16){
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
			default: printf("%d",temp%16);
		}
	}	

	
	/* umesto FOR moze:
	 * 
	 * temp = n;
	 * while (temp > 0){
	 * 		printf("%d",temp%16);
	 * 		temp = temp / 16;
	 * }
	 * 
	 */	
	
	return 0;
}
