#include<iostream>
 using namespace std;
 
 template<typename T>
 void my_swap(T &a, T &b){
 	T temp = a;
 	a = b;
 	b = temp;
 }
 
 template<typename T>
 void xuat(int n, T a[]){
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<" ";
	}
	cout<<endl;
 }
 
 template<typename T>
 void selection_sort(int n, T a[]){
 	for(int i=0; i<n-1; i++){
 		int pos_min = i;
 		for(int j = i+1; j<n; j++){
 			if(a[pos_min] > a[j]){
 				pos_min = j;	
			}
		}
		if(pos_min != i){
			my_swap(a[i], a[pos_min]);
			xuat(n,a);
		}
	}
 }
 
 int main(){
 	int n = 5;
 	int a[5] = {5, 4, 3, 2, 1};
 	xuat(n,a);
 	selection_sort(n, a);
 }
