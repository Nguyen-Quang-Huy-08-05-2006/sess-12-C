#include<stdio.h>

int factorial(int b){
	int factorial=1;
	for(int i=1;i<=b;i++){
		factorial*=i;
	}
	return factorial;
}

int main(){
	int a,factorialN;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&a);
	factorialN=factorial(a);
	printf("giai thua la %d",factorialN);

	return 0;
}
