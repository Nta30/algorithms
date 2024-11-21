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
 void merge(T a[], int left, int mid, int right){
 	int n1 = mid - left + 1;
 	int n2 = right - mid;
 	
 	T *left_arr = new T[n1];
 	T *right_arr = new T[n2];
 	for(int i=0;i<n1;i++){
 		left_arr[i] = a[left + i];	
	}
	for(int i=0;i<n2;i++){
		right_arr[i] = a[mid + 1 + i];
	}
	int i=0, j=0, k = left;
	while(i<n1 && j<n2){
		if(left_arr[i]<right_arr[j]){
			a[k++] = left_arr[i++];
		}else{
			a[k++] = right_arr[j++];
		}
	}
	while(i<n1){
		a[k++] = left_arr[i++];
	}
	while(j<n2){
		a[k++] = right_arr[j++];
	}
	delete []left_arr;
	delete []right_arr;
 }
 
 template<typename T>
 void merge_sort(T a[], int left, int right){
 	if(left >= right){
 		return;
	}
	int mid = (left + right) / 2;
	merge_sort(a,left,mid);
	merge_sort(a,mid+1,right);
	merge(a,left,mid,right);
 }
 
 
 int main(){
 	int n = 8;
 	int a[8] = {8, 2, 5, 3, 4, 7, 6, 1};
 	merge_sort(a, 0, n-1);
 	xuat(n,a);
 }
