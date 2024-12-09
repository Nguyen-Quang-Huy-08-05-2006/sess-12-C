#include<stdio.h>

int Pnum();


int Pnum(int b){
	for(int i=0;i<b;i++){
		if(b%i==0){
			b+=i;
		}
	}
	return b;
}

int main(){
	int a;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&a);
	if(a==Pnum(a)){
		printf("%d la so hoan hao.",a);
	}else{
		printf("%d khong phai so hoan hao.",a);
	}
	return 0;
}
