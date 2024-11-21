#include<iostream>
 using namespace std;
 
 template<typename T>
 int binary_search(T a[], int n, T x){
 	int i=0, j=n-1;
 	while(i<=j){
 		int k = (i+j)/2;
 		if(a[k] == x){
 			return k;	
		}else if(a[k] < x){
			i = k + 1;
		}else{
			j = k - 1;
		}
	}
 	return -1;
 }
 
 int main(){
	int n = 8;
	int a[] = {1, 5, 6, 9, 15, 20, 58, 72};
	int index = binary_search(a,n,20);
	if(index != -1){
		cout<<"Tim thay tai vi tri "<<index<<endl;
	}else{
		cout<<"Khong tim thay"<<endl;
	}
 }
