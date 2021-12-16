#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){ // max: j=3 -> j+1=4 -> arr[4]
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep:");
	for(int i=0;i<n;i++){
		printf("%d   ",arr[i]);
	} // nhap 1 mang n so nguyen, sap xep theo thu tu tu be -> lon
}
