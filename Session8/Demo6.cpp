#include <stdio.h>
int main(){
	int arr[7] = {0,11,13,14,15,17,18};
	int search = 15;
	int low = 0;
	int hi = 6;
	int flag = 0; // chua tim dc
	while(low <= hi){
		// tim vi tri chinh giua cua doan danh sach 
		int mid = (low + hi)/2;
		if(search == arr[mid]){
			flag = 1;
			printf("Tim thay roi!");
			break;
		}else if(search < arr[mid]){
			hi = mid - 1;
		}else if(search > arr[mid]){
			low = mid + 1;
		}
	}
	if(flag == 0){
		printf("Not found!");
	}
}
