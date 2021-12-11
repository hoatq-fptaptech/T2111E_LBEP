#include <stdio.h>
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	
	if(n<2){
		printf("%d khong phai so nguyen to",n);
	}else{
		// n>=2
		int count = 0;
		// tim uoc thu 3 cua n: neu co -> ko phai SNT
		for(int i=2;i<=n/2;i++){ //n=1000
			if(n%i==0){
				count++;// chac chan co uoc thu 3
				printf("%d khong phai so nguyen to",n);
				break;// di den nhanh No
			}
		}
		// No
		if(count==0){
			printf("%d la so nguyen to",n);
		}
	}
	
}
