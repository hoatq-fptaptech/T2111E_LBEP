#include <stdio.h>
// cac function chuc nang con
void NhapString(char s[]){
	printf("Nhap chuoi:");
	scanf("%s",s);
}
void KTChuSo(char s[]){
	/// .. kiem tra va print ra ket qua
	printf("Kiem tra chu so");
}
int main(){
	int c=0 ;
	char a[50];
	do{
		printf("Vui long chon chuc nang su dung:\n");
		printf("1. Nhap 1 chuoi\n");
		printf("2. Kiem tra chuoi co chu so hay ko?\n");
		printf("3. Kiem tra chuoi co chu cai in hoa hay khong?\n");
		printf("4. Nhap chuoi con, va kiem tra chuoi con co nam trong a hay khong?\n");
		printf("15. Thoat chuong trinh\n");
		scanf("%d",&c);
		switch(c){
			case 1: NhapString(a); break;// chuc nang 1
			case 2: KTChuSo(a);break;
			case 3: break;
			case 4: break;
			case 15:printf("Ban da thoat chuong trinh"); break;
			default: printf("Vui long chon dung phim chuc nang\n");
		}
		
	}while(c != 15);
	// xinchao
	// in
	
}
