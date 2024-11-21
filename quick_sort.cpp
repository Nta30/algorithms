#include<iostream>
 using namespace std;
 
 template<typename T>
 void my_swap(T &a, T &b){
 	T temp = a;
 	a = b;
 	b = temp;
 }
 
 template<typename T>
 int partition(T a[], int left, int right){
 	T pivot = a[left];
 	int i = left, j = right;
 	while(i<j){
 		while(a[i] <= pivot) i++;
		while(a[j] > pivot) j--;
		if(i<j){
			my_swap(a[i],a[j]);
		}
	}
	my_swap(a[left],a[j]);
	return j;
 }
 template<typename T>
 void quick_sort(T a[], int left, int right){
 	if(left<right){
 		int index = partition(a,left,right);
 		quick_sort(a,left,index-1);
 		quick_sort(a, index+1, right);
	 }
 }
 
 template<typename T>
 void xuat(int n, T a[]){
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<" ";
	}
	cout<<endl;
 }
 int main(){
 	int n = 8;
 	int a[8] = {21, 3, 24, 1, 4, 10, 54, 5};
 	quick_sort(a,0,n-1);
 	xuat(n,a);
 }
