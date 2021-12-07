#include <stdio.h>
int main(){
	int tk,ls,n;
	printf("Nhap so tien ban dau:");
	scanf("%d",&tk);
	printf("Lai suat:");
	scanf("%d",&ls);
	printf("Nhap so nam muon gui:");
	scanf("%d",&n);
	if(tk >0 && ls > 0 && n>0){
		int count=0;
		while(count < n){
			tk = tk + tk*ls/100;
			count++;
		}
		printf("So tien sau khi gui:%d",tk);
	}else{
		printf("error");
	}
	
}
