#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	do{
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);
//	}while(a+b <= c || a+c<=b || b+c<=a); // a+b > c && a+c>b && b+c>a
	}while(!(a+b > c && a+c>b && b+c>a)); // a+b > c && a+c>b && b+c>a
	
	// logic: Nhap 3 canh tam giac
	// dieu kien: khi chua co 3 canh tam giac
	
	// tinh cv dt
	int p = a+b+c;
	float p2 = (float)p/2;
	float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
//	printf("Chu vi: %d",p);
//	printf("Dien tich: %f",s);
	printf("Chu vi: %d va dien tich: %f",p,s);
}
