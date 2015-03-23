#include <stdio.h>


int main(void){
	
	int n, f1 =1, f2 =1, s, Sum = 0;
	int i, Sn = 2;
	scanf("%d",&n);

	
	for (i = 3; Sn <= n; i++){
		s  = f1 + f2;
		//printf(" %d",s);
		if (s % 2 == 0){
			//printf("!");
			Sum += s;
			Sn++;
		}
		f1 = f2;
		f2 = s;
	}
		
		printf("\n Sum= %d",Sum);
	return 0;
}
