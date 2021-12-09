#include <stdio.h>
int main(){
//	int x = 0;
//	do{
//		printf("do .. while hello\n");
//	}while(x<0);// dung thu 1 lan
//	
//	while(x<0){
//		printf("while .. hello\n");
//	}
//	
	// yc: nhap vao 1 so nguyen duong tu ban phim (x >0)
	int n;
	// while
//	printf("Nhap n=");
//	scanf("%d",&n);
//	while(n<=0){
//		printf("Nhap n=");
//		scanf("%d",&n);
//	}

	// do while
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<=0);
	// kieu gi ra day cung duoc 1 so nguyen duong
	printf("So n vua nhap: %d\n",n);
}
