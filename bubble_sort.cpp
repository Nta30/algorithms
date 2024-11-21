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
 void bubble_sort(int n, T a[]){
 	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(a[j]<a[j-1]){
				my_swap(a[j],a[j-1]);
				xuat(n,a);
			}
		}
	}
 }
 
 int main(){
 	int n = 5;
	int a[5] = {5, 4, 3, 2, 1};
	xuat(n,a);
	bubble_sort(n,a); 	
 }
