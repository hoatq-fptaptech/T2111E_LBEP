#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=1;
	printf("Cac so nguyen to nho hon %d: ",n);
	while(i<n){
		int j=1,count=0;
		while(j<=i){
			if(i%j==0){
				count++;
			}
			j++;
		}
		if(count==2){
			printf("%d    ",i);
		}
		i++;
	}
}
