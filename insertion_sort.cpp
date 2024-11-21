#include<iostream>
 using namespace std;
 
 template<typename T>
 void xuat(int n, T a[]){
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<" ";
	}
	cout<<endl;
 }
 
 template<typename T>
 void insertion_sort(int n, T a[]){
 	for(int i = 1; i<n; i++){
 		int key = a[i];
 		int j = i-1;
 		while(j>=0 && a[j]>key){
 			a[j+1] = a[j];
 			j--;
		}
		a[j+1] = key;
		xuat(n,a);
	}
 }
 
 int main(){
 	int n = 8;
 	int a[8] = {2, 4, 6, 3, 7, 1, 8, 4};
 	xuat(n,a);
 	insertion_sort(n,a);
 }
