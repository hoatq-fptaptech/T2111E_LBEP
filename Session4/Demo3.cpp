#include <stdio.h>
int main(){
	int tk,ls,mongmuon;
	printf("Nhap so tien ban dau:");
	scanf("%d",&tk);
	printf("Lai suat:");
	scanf("%d",&ls);
	printf("Nhap so tien muon nhan:");
	scanf("%d",&mongmuon);
	
	if(tk >0 && ls >0 && mongmuon > tk){
		int count = 0;
		while(tk < mongmuon){
			tk += tk*ls/100; // a +=3; => a = a+3;
			count++;
		}
		printf("So nam can gui ngan hang: %d",count);
	}else{
		printf("Error");
	}
}

