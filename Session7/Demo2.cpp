#include <stdio.h>
int main(){
	int arr[10];
	
	// nhap 10 so tu ban phim
	for(int i=0;i<10;i++){
		printf("Nhap pt arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	int high = arr[0];
	for(int i=0;i<10;i++){ // duyet mang
		if(arr[i] > high){
			high = arr[i];
		}
	}
	// max: high
	printf("Max: %d\n",high);
	
	// 
	int h2 = high;
	// phair tim cho h2 1 gia tri cua mang ma nho hon high
	for(int i=0;i<10;i++){
		if(arr[i]<high){
			h2 = arr[i];
			break;
		}
	}
	if(h2 == high){
		// toan so lon nhat (mang toan cac so giong nhau)
		printf("Khong tim duoc so gan lon nhat\n");
	}else{
		for(int i=0;i<10;i++){
			if(arr[i]> h2 && arr[i]< high){
				h2 = arr[i];
			}
		}
		printf("So gan lon nhat: %d\n",h2);
	}
}
