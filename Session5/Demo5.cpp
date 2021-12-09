#include <stdio.h>
int main(){
	int n;
	// bat nhap vao 1 so nguyen duong
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<=0);
	
	int count=0;
	
//	int i=1;
//	while(i<=n){
//		// yes
//		if(n%i==0){
//			count++;
//		}else{
//			
//		}
//		i++;
//	}

	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	// no
	if(count==2){
		// yes
		printf("%d la so nguyen to",n);
	}else{
		//no
		printf("%d khong phai so nguyen to",n);
	}
}
