#include <stdio.h>
int main(){
	float a,b;
	printf("Nhap a=");
	scanf("%f",&a);
	printf("Nhap b=");
	scanf("%f",&b);
	
	if(a>=b){
		// yes
		if(b==0){
			// yes
			printf("Error!");
		}else{
			//no
			float t = a/b;
			printf("ket qua: %f",t);
		}
	}else{
		//no
		printf("ket qua: %f",a*b);
	}
}
