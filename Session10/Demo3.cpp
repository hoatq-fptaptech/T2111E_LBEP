#include <stdio.h>
#include <string.h>
int main(){
	char str1[20];// day la 1 string
	char str2[20];
//	for(int i=0;i<20;i++){
//		printf("Nhap 1 ky tu:\n");
//		scanf("%c",&str[i]);
//	}
	printf("NHap chuoi 1:");
	scanf("%s",str1); // hello
	printf("Nhap chuoi 2:");
	scanf("%s",str2); // t2111e

	printf("Chuoi vua nhap vao: %s va %s \n",str1,str2);
	
	strcat(str1,str2); // => str1 = str1+str2;
	printf("2 Chuoi vua hien tai: %s va %s \n",str1,str2); // hellot2111e  -- t2111e
	
	strcat(str2,str1); // => str2 = str2 + str1; str2 = t2111e + hellot2111e
	printf("2 Chuoi vua hien tai: %s va %s \n",str1,str2); // hellot2111e --- t2111ehellot2111e  
	int ss = strcmp(str1,str2);  // string compare
	printf("So sanh lan thu nhat: %d\n",ss);
	int ss2 = strcmp(str2,str1);
	printf("So sanh lan thu hai: %d\n",ss2);
	int vitricuaO = strchr(str1,'o') - str1; // vi tri theo dia chi o nho (memory): so 4 ton that thuyet - so 0 ton that thuyet = 4
	printf("vi tri cua O: %d\n",vitricuaO);
	int a ,b=5; 
	a = b; // dung
	//str1 = str2; // sai vi ban chat: str1 va str2 la array
	strcpy(str1,str2);// => str1 = str2;
	printf("2 Chuoi vua hien tai: %s va %s \n",str1,str2); // t2111ehellot2111e  -- t2111ehellot2111e
	int kichthuoc = strlen(str1);// = 17
	printf("kich thuoc:%d\n",kichthuoc);
}
