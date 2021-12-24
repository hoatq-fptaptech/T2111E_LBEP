#include <stdio.h>
#include <iostream>
int main(){
	int x = 10;
	int *p;// p la pointer
	printf("x = %d\n",x);
	printf("Dia chi cuar x: ");
	std::cout << &x;
	printf("\n");
	p= &x;
	printf("gia tri cua p: ");
	std::cout<< p;
	printf("\n");
	printf("Di theo dia chi ma p dang co: ");
	std::cout<< *p;
	printf("\n");
	x++; // tham chieu truc tiep
	printf("x = %d\n",x); // 11
	(*p)++; // tham chieu gian tiep => dieu kien dc nhieu o nho
	p = p+4; // p chuyen sang nha hang xom cua x => tham chieu sang o nho tiep theo canh x
	printf("x = %d\n",x);
//	p -> p+10 => p chinh la array => vi p quan ly 11 o nho lien tiep nhau
}
