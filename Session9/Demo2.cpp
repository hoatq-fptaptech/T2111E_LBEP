#include <stdio.h>
#include "dichvu.h"

int main(){
	// tim so lon trong  2 so nguyen
	int a = 5, b = 8;
	// day la cho can thue dich vu tim max
	int max = DichVuTimMax(a,b);// su dung dich vu  -- call by value   (invoke function) int max = 8;
	printf("Max: %d\n",max);
	InMenu();
	if(KTSoLe(9)){
		printf("9 la so le\n");
	}
}
