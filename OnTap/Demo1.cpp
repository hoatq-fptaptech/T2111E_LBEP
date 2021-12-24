#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien{ // khai bao  1 kieu du lieu moi
	char tensv[50];
	int lythuyet;
	int thuchanh;
	int quatrinh;
} SV;
int main(){
	struct SinhVien sv1; // sv1 la bien co kieu du lieu struct SinhVien
	sv1.lythuyet = 12;
	sv1.thuchanh = 9;
	sv1.quatrinh = 6; 
	//sv1.tensv = "nguyentiendat";
	strcpy(sv1.tensv,"nguyentiendat");
	printf("Thong tin sinh vien:\n");
	printf("Ten: %s - Diem Ly thuyet: %d - Thuc hanh: %d - Qua trinh: %d\n",sv1.tensv,sv1.lythuyet,sv1.thuchanh,sv1.quatrinh);
	SV sv2;
	printf("Nhap ten sinh vien 2:");
	scanf("%s",sv2.tensv);
	printf("Nhap diem thi ly thuyet:");
	scanf("%d",&sv2.lythuyet);
	printf("Nhap diem thi thuc hanh:");
	scanf("%d",&sv2.thuchanh);
	printf("Nhap diem qua trinh:");
	scanf("%d",&sv2.quatrinh);
	printf("Thong tin sinh vien:\n");
	printf("Ten: %s - Diem Ly thuyet: %d - Thuc hanh: %d - Qua trinh: %d\n",sv2.tensv,sv2.lythuyet,sv2.thuchanh,sv2.quatrinh);
	
	// mang sinh vien
	SV t2111e[25];
	for(int i=0;i<25;i++){
		printf("Nhap ten sinh vien:");
		scanf("%s",t2111e[i].tensv);
		printf("Nhap diem thi ly thuyet:");
		scanf("%d",&t2111e[i].lythuyet);
	}
	
	SV *dssv;	
	dssv = (SV *)malloc(25*sizeof(SV));// SV dssv[25];
	for(int i=0;i<25;i++){
		printf("Nhap ten sinh vien:");
		scanf("%s",(dssv+i)->tensv); // struct pointer
		printf("Nhap diem thi ly thuyet:");
		scanf("%d",&(dssv+i)->lythuyet);
	}
}
