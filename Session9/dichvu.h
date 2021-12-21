
// can viet 1 dich vu tim max trong 2 so nguyen
int DichVuTimMax(int x, int y){ // day la tham so, khong phai bien
//	if(x > y){
//		return x;// khi gap return, ham` se dung tai day luon ma ko chay tiep
//	}
//	return y;

	int m = x;// max la 1 bien - local variable
	if(y > m){
		m = y;
	}
	return m;
}
void InMenu(){
	printf("Menu thuc don:\n");   	
	printf("1. Pho bo tai chin\n");   	
	printf("2. Bun bo Hue\n");   
 	
}

bool KTSoLe(int n){
//	if(n%2 ==1){
//		return true;
//	}
//	return false;

	return n%2==1;
} 

bool KTNguyenTo(int n){
	if(n<2) return false;
	///if(n<4 && n ) return true; // den day dc thi 2<=n < 4 -> 2 , 3
	if(n==2) return true;
	if(n==3) return true;
	// neu den dc day thi chac chan n >=4
	for(int i=2;i<=n/2;i++){ // muc dich: Tim uoc thu 3 cua n
		if(n%i==0) return false;
	}
	return true;
}

int MaxOfArray(int arr[],int n){ // call by reference - goi vao kieu tham chieu
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max =  arr[i];
		}
	}
	return max;
}

int MaxOfArray2(int *arr,int n){ // call by reference - goi vao kieu tham chieu
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max =  arr[i];
		}
	}
	return max;
}

int NearMax(int arr[],int n){
	int max = MaxOfArray(arr,n);
	int nmax = max;
	for(int i=0;i<n;i++){
		if(arr[i]<max){
			nmax = arr[i];
			break;
		}
	}
	if(nmax == max){
		// mang toan so giong nhau
		return NULL; // tra ve 1 gia tri trong
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]> nmax && arr[i]< max){
				nmax = arr[i];
			}
		}
		return nmax;
	}
}

