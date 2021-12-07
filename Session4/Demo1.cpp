#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int s=0,i=1;
	
	while(i<=n){
		// yes
		s = s+i;
		i++;
	}
	// no
	printf("S = %d",s);
}
