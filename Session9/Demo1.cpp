#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		// nhap gia tri cho phan tu arr[i]
		int flag = 0;
	//	do{
			//flag = 0;
			printf("Nhap gia tri arr[%d]=",i);
			scanf("%d",&arr[i]); 
			
			for(int j=0;j<=i-1;j++){
				if(arr[j] == arr[i]){
					flag = 1;
					break;
				}
			}
	//	}while(flag==1);
		if(flag == 1){ // quay tro lai nhap lai vi tri arr[i]
			i--;
		}		
	}
	printf("Mang sau khi nhap:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
