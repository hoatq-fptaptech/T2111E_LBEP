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
	int count =0, max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			count++; // bai 7: count+=arr[i];
			if(count > max){
				max = count;
			}
		}else{
			count = 0;
		}                                 
	}
	printf("So luong so duong lien tiep nhieu nhat: %d\n",max);	
}	
