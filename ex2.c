#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
void create(int** a,int n,int m){
	int i,j;
	for (i = 0; i < n;i++){
		for (j = 0; j < m; j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void print(int** a,int n,int m){
	int i,j;
	for (i = 0; i < n;i++){
		for (j = 0; j < m; j++){
			/*if ((a[i][j]%2==0)&&(i%2!=0)){
				summ+=a[i][j];
				ch++;
			}*/
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	float ch,summ;
	summ=0;
	ch=0;
	int **a=(int**)malloc(n*sizeof(int*));
	int i=0,j=0;
	for (i = 0; i < n;i++){
		a[i]=(int*)malloc(m*sizeof(int));
	}
	create(a,n,m);
	print(a,n,m);
	float res=summ/ch;
	printf("-> %lf\n",res);
}
