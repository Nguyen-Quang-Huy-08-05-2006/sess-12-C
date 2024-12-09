#include<stdio.h>

int timUoc(int a){
	int uoc=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			uoc++;
		}
	}
	return uoc;
}

int main(){
	int a;
	printf("nhap vao so nguyen bat ky lon hon 1: ");
	scanf("%d",&a);
	while(a<2){
		printf("so nay khong lon hon 1, vui long nhap lai: ");
		scanf("%d",&a);
	}
	if(timUoc(a)==2){
		printf("True");
	}else{
		printf("False");
	}
	return 0;
}
