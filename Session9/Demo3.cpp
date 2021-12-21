#include <stdio.h>
#include "dichvu.h"

int main(){
	if(KTSoLe(11)){
		printf("11 la so le\n");
	}
	int ds[5] = {4,4,4,4,4};
	
	int m = MaxOfArray(ds,5);
	printf("m = %d\n",m);
	int nm = NearMax(ds,5);
	if(nm!= NULL){
		printf("nm= %d\n",nm);
	}else{
		printf("Mang toan so giong nhau");
	}
	
}
