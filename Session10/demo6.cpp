#include <stdio.h>
#include <string.h>
int main(){
	char arrs[10][50];// cai nay la gi? - mang arrs co 5 phan tu: arrs[0], arrs[1]... la cac string
	for(int i=0;i<10;i++){
		// nhap chuoi arrs[i]
		printf("Nhap chuoi:");
		scanf("%s",arrs[i]);
	}
	printf("Sau khi nhap xong:\n");
	for(int i=0;i<10;i++){
		printf("%s\n",arrs[i]);
	}
	
	for(int i=0;i<10-1;i++){
		for(int j=0;j<10-i-1;j++){
			if(strcmp(arrs[j],arrs[j+1])>0){
				// swap
				char tmp[50];
				strcpy(tmp,arrs[j]); // tmp = arr[j]
				strcpy(arrs[j],arrs[j+1]);// arr[j]=arr[j+1]
				strcpy(arrs[j+1],tmp);// arr[j+1]= tmp
			}
		}
	}
	printf("Sau khi sap xep xong:\n");
	for(int i=0;i<10;i++){
		printf("%s\n",arrs[i]);
	}
}
