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
 void my_swap(T &a, T &b){
 	T temp = a;
 	a = b;
 	b = temp;
 }
 
 
 template<typename T>
 void heapify(T a[], int n, int i){
 	int left = 2*i + 1;
 	int right = 2*i + 2;
 	int largest = i;
 	if(left<n && a[left]>a[largest]){
 		largest = left;	
	}
	if(right<n && a[right]>a[largest]){
		largest = right;
	}
	if(largest != i){
		my_swap(a[i],a[largest]);
		heapify(a,n,largest);
	}
 }
 
 template<typename T>
 void heap_sort(T a[], int n){
 	//xay dung max heap
 	for(int i=(n/2)-1;i>=0;i--){
 		heapify(a,n,i);	
	}
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
		heapify(a,i,0);
	}
 }
 
 int main(){
 	int n = 8;
 	int a[8] = {8, 2, 5, 3, 4, 7, 6, 1};
	heap_sort(a,n);
	xuat(n,a); 	
 }
