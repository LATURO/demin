#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
void del(int *arr,int* size){
	int i;
	int newsize=*size;
	int p = newsize;
	for (i = 1; i <p/2+1; i++){
		arr[i]=arr[2*i];
		newsize--;
	}
	arr=(int*)realloc(arr,newsize*sizeof(int));
	*size=newsize;
}
void createarr(int *arr,int size){
	int i;
	for (int i = 0; i < size; ++i){
		scanf("%d",&arr[i]);
	}
}
void printarr(int *arr,int size){
	int i;
	for (i = 0; i <size; i++){
		printf("%d %d\n",i,arr[i]);
	}
}
int main(){
	int size,i;
	scanf("%d",&size);
	int *arr=NULL;
	arr=(int*)malloc(size * sizeof(int));
	createarr(arr,size);
	printf("--------------\n");
	printarr(arr,size);
	printf("--------------\n");
	del(arr,&size);
	printf("--------------\n");
	printarr(arr,size);
	printf("-> %d\n",arr[size*2]);
	free(arr);
}
