#include <stdio.h>
#include <string.h>
int main(){
	char arrs[5][50];// cai nay la gi? - mang arrs co 5 phan tu: arrs[0], arrs[1]... la cac string
	for(int i=0;i<5;i++){
		// nhap chuoi arrs[i]
		printf("Nhap chuoi:");
		scanf("%s",arrs[i]);
	}
	printf("Sau khi nhap xong:\n");
	for(int i=0;i<5;i++){
		printf("%s\n",arrs[i]);
	}
}
// mang 2 chieu char <=> mang 1 chieu string
