#include <stdio.h>
int main(){
	for(int i=0;i<10;i++){
		printf("Start i=%d\n",i);
		if(i==3){
//			break;
			continue;
		}
		printf("End i=%d\n",i);
	}
}
