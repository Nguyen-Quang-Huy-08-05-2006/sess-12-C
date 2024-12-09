#include<stdio.h>

void findMax(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("so lon nhat la %d\n",max);
}

int main(){
	int num[]={4,6,5,9,1,3};
	int size=sizeof(num)/sizeof(num[0]);
	findMax(num,size);
	return 0;
}
