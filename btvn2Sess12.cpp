#include<stdio.h>

void arr(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}

int main(){
	int num[5]={66,88,9,4,10};
	int size=sizeof(num)/sizeof(num[0]);
	arr(num,size);
	
}
