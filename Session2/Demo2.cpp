#include <stdio.h>
int main(){
	int A,B,C; // khai bao 1 luc 3 bien A B C
	printf("Nhap A = ");
	scanf("%d",&A);
	printf("Nhap B = ");
	scanf("%d",&B);
	printf("Nhap C = ");
	scanf("%d",&C);
	
	int Min = A;
	
	if(B<Min){
		// yes
		Min = B;
	}else{
		// no
		
	}
	if(C<Min){
		// yes
		Min = C;
	}else{
		// no
		
	}
	
	printf("So nho nhat: %d",Min);
	
}
