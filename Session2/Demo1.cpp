#include <stdio.h>
int main(){
	int a;// may tinh se cap 1 o nho 16bits cho a dai dien
	int A;
	a = 10; // gia su: gia tri cua a se duoc nguoi dung nhap tu ban phim khi chay chuong trinh
	a = a + 5;// 15
	printf("a = %d\n",a);// man hinh may tinh in ra cau sau (nam trong nhay kep) -> a = %d, toi se lay gia tri cua bien a thay the vi tri cua %d
	a = a+ 2;// 17
	printf("a = %d\n",a);
	
	float pi = 3.14159;
	printf("pi = %f\n",pi);
	
	double vat = 0.01;
	printf("VAT = %lf\n",vat); // lf -> long float
	
	char hr = 's';
	printf("Ky tu hr la: %c\n",hr);
	
	int n; // yeu cau nguoi dung nhap gia tri cho n tu ban phim 
	printf("Nhap n=");
	scanf("%d",&n);// lenh yeu cau nhap 1 so nguyen
	
	float fx;
	printf("Nhap fx=");
	scanf("%f",&fx);// lenh yeu cau nhap 1 so thuc
}
