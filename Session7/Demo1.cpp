#include <stdio.h>
int main(){
	int arr[4];
	int x;
	
	x = 10;
	
	arr[0] = 15; // arr = 15 -> error 
	arr[3] = 2;
	arr[1] = 10;
	arr[2] = 8;
	
	int arr2[2000]; // nhapj 1 mang n so nguyen voi n nhap tu ban phim
	//int a,b,c,d,e,f,g,h,i,k,l,m,n ...
	// nhap gia tri cho x
	printf("Nhap x=");
	scanf("%d",&x);
	// nhap gia tri cho arr2[3]
//	printf("Nhap arr2[3] = ");
//	scanf("%d",&arr2[3]);
	 // nhap cho arr2[6]
	
	for(int i=0;i<2000;i++){
		printf("Nhap gia tri cho arr2[%d]:",i);
		scanf("%d",&arr2[i]); // arr2[0]  arr2[1]
	}

}
