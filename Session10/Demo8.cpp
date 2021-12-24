#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr; // ko lam kieu array binh thuong nua, coi nhu day la array
	//arr = (int *)malloc(5 * sizeof(int)); int x;
	arr = (int *)calloc(5,sizeof(int)); // int x=0;
	// 2 lenh tren tuong duong: int arr[5];
	for(int i=0;i<5;i++){
		printf("nhap arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	// quen, thieu 3 so
	// xin them 3 o nho nua
	arr = (int *)realloc(arr,8*sizeof(int));// da co them 3 so=> tong so phan tu: 8 -> dieu` chinh kich thuoc mang
	for(int i=5;i<8;i++){
		printf("nhap arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("Mang sau khi nhap xong:\n");
	for(int i=0;i<8;i++){
		printf("%5d",arr[i]);
	}
	arr= (int *)realloc(arr,20*sizeof(int));
	// ko co nhu cau su dung arr nua
	free(arr);
	// gia su chuong trinh con` dai` phia sau
	//...
	//... 
	//....
}
