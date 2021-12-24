#include <stdio.h>

int main(){
	int temp[4][3];
	printf("Nhap ma tran 4x3\n");
	for(int i=0;i<4;i++){
		// nhap gia tri cho mang temp[i]
		for(int j=0;j<3;j++){
			printf("Nhap gia tri temp[%d][%d]:",i,j);
			scanf("%d",&temp[i][j]);
		}
	}
	printf("Sau khi nhap:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
//			printf("%d\t",temp[i][j]);
			printf("%10d",temp[i][j]);// %10d - danh vi tri 10 o hien thi tren man hinh cho so nguyen nay in ra
		}
		printf("\n");
	}
}
