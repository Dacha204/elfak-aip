#include <stdio.h>

void Sorter(int a[], int len, int smer){

	int i, k, j, pom;
	
	if (smer == 1){
		
		for(i=0; i<len-1; i++){
			k = i;
			for (j=i+1; j<len; j++)
				if (a[j]<a[k])
					k = j;
					
			pom = a[i];
			a[i] = a[k];
			a[k]=pom;		
		}					
	}else if (smer == 0){
		for(i=0; i<len-1; i++){
			k = i;
			for (j=i+1; j<len; j++)
				if (a[j]>a[k]) //razlika samo u znaku > <
					k = j;
					
			pom = a[i];
			a[i] = a[k];
			a[k]=pom;		
		}
	}
}

int main(){

	int a[100],i,n,s;
	printf("n=");
	scanf("%d ",&n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
		
	printf("Smer (1: rastuci, 0 opadajuci):");
	scanf("%d",&s);
	Sorter(a,n,s);
	
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}


/* Extra: Short code in C: 
 * 

void Sorter(int a[], int len, int smer){

	int i, k, j, pom;	
	
	for(i=0; i<len-1; i++){
		k = i;
		for (j=i+1; j<len; j++)
			if (smer? a[j]<a[k] : a[j]>a[k]) //ternarni operator 
				k = j;
		pom = a[i];
		a[i] = a[k];
		a[k]=pom;
	}		
}
 */
