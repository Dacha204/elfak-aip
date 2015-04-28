#include <stdio.h>

int main(){

	int a[10][10],mini,minj,maxi,maxj,i,j,n,pom;
	
	//unos matrice
	scanf("%d",&n);	
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	
	//stampanje matrice pre obrade
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	//pamtimo indekse najmanjeg i najveceg elementa
	//proglasimo za najmanjeg element u donju levu cosku (ispod gl. diag)
	//progglasimo za najveci element u gornju desnu cosku (iznad gl. diag)
	//za min moze bilo koji element ispod gl. diag
	//slicno i za max, bilo koji od elemenata iznad gl. diag
	mini = n-1;
	minj = 0;
	
	maxi = 0;
	maxj = n-1;
	
	//idemo redom kroz matricu
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			//element iznad glavne diag?
			if (i<j){
				//trenutni el. veci od najveceg pronadjenog do sad?
				if (a[i][j] > a[maxi][maxj]){
					//pamti koordinate
					maxi = i;
					maxj = j;
				}
			//elemet ispod glavne diag?
			}else if (i>j){
				//trenutni el. manji od najmanjeg pronadjenog do sad?
				if (a[i][j] < a[mini][minj]){
					//pamti koordinate
					mini = i;
					minj = j;
				}
			}
	
	//zamena mesta pronadjenih elemenata	
	pom = a[mini][minj];
	a[mini][minj] = a[maxi][maxj];
	a[maxi][maxj] = pom;
	
	//stampanje matrice
	for (i=0; i<n; i++){
		for (j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
		

	return 0;
}
