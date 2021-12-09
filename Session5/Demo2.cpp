#include <stdio.h>
int main(){
	int x = 0; // global variable -> bien cuc bo: ke tu thoi diem toi duoc khai bao, bat ky cho nao cung dung duoc
	if(x >=0){
		x++;
		int y=1; // local variable -> bien dia phuong: ke tu thoi diem khai bao, chi ben trong block code do moi dung duoc
		y++;
	}
	printf("x = %d \n",x);
//	printf("y = %d \n",y);// y ko ton tai
	
	for(int i=0;i<10;i++){ // tai sao lai khai bao int i =0 ? tiet kiem tai nguyen cua may tinh
		printf("Hello world\n");
	}
	for(int i=0;i<10;i++){ // tai sao lai khai bao int i =0 ? tiet kiem tai nguyen cua may tinh
		printf("Hello world\n");
	}
	for(int i=0;i<10;i++){ // tai sao lai khai bao int i =0 ? tiet kiem tai nguyen cua may tinh
		printf("Hello world\n");
	}
	for(int i=0;i<10;i++){ // tai sao lai khai bao int i =0 ? tiet kiem tai nguyen cua may tinh
		printf("Hello world\n");
	}
	for(int i=0;i<10;i++){ // tai sao lai khai bao int i =0 ? tiet kiem tai nguyen cua may tinh
		printf("Hello world\n");
	}
	// gia su ra day ko can i lam gi thi khai bao nhu tren se tiet kiem o nho may tinh
	int count = 0;
	while(count < 10){
		printf("hello world\n");
		count++;
	}
	

	
}
