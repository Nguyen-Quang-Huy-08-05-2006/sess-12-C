#include<stdio.h>
int sum(int a,int b){
	printf("%d+%d=%d",a,b,a+b);
}
int main(){
	int a,b;
	printf("nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("nhap vao so thu hai: ");
	scanf("%d",&b);
	sum(a,b);
	return 0;
}
