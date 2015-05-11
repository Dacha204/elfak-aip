#include <stdio.h>

void swap(int *a, int *b){
	int t;
	
	t = *a;
	*a = *b;
	*b = t;
}

int main(){

	int x,y,z;
	
	scanf("%d %d %d",&x,&y,&z);
	
	swap(&x,&y);
	swap(&y,&z);
	
	printf("%d %d %d", x,y,z);
	return 0;
}
