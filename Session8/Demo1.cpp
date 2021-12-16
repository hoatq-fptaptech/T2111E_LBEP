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
	int total = 0,count = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			total += arr[i];
			count++;
		}
	}
	if(count != 0){
		float tb = (float)total/count;
		printf("Trung binh cong cac so le: %f",tb);
	}else{
		printf("Danh sach khong co so le nao ca");
	}
	
}
