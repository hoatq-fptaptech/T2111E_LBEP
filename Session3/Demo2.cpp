#include <stdio.h>
#include <math.h>
int main(){
	// input a,b,c
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a); // & dia chi cua bien a trong memory
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		// yes
		int p = a+b+c;// 5 6 6 = 17
		float p2  = (float)p/2;// 8  int / int => int mong muon: float/int => float // (float)17 => 17.00000/2 => 8.50000
		float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("Day la tam giac co chu vi:%d \n",p);
		printf("Dien tich: %f",s);
	}else{
		// no
		printf("Day khong phai 3 canh tam giac");
	}
}
